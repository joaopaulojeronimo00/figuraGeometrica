#include <iostream>
#include <sstream>
#include <vector>
#include <fstream>

#include "../header/Leitor.h"
#include "../header/CutBox.h"
#include "../header/CutEllipsoid.h"
#include "../header/CutSphere.h"
#include "../header/CutVoxel.h"
#include "../header/PutBox.h"
#include "../header/PutEllipsoid.h"
#include "../header/PutSphere.h"
#include "../header/PutVoxel.h"

Leitor::Leitor(Sculptor *t)
{
    this->t;
    // ctor
}

Leitor::~Leitor()
{
    // dtor
}

void Leitor::ler(std::string arq)
{
    std::ifstream entrada;
    std::stringstream ss;
    std::string linha, indentificador;
    std::vector<FiguraGeometrica *> desenho;

    entrada.open(arq.c_str());

    if (!entrada.is_open())
    {
        std::cout << "erro ao abrir arquivo" << arq << std::endl;
        exit(0);
    }

    while (std::getline(entrada, linha))
    {
        ss.clear();
        ss.str(linha);
        ss >> indentificador;

        if (indentificador.compare("dim") == 0)
        {
            ss >> nx >> ny >> nz;
            std::cout << "nx: " << nx << "ny: " << ny << "nz: " << nz << std::endl;
        }
        else if (indentificador.compare("putvoxel") == 0)
        {
            int x0, y0, z0;
            float r, g, b, a;
            ss >> x0 >> y0 >> z0 >> r >> g >> b >> a;
            std::cout << x0 << ", " << y0 << ", " << z0 << ", " << nx << ", " << ny << ", " << nz << ", " << r << ", " << g << ", " << b << ", " << a << ", " << std::endl;

            desenho.push_back(new PutVoxel(x0, y0, z0, r, g, b, a));
        }
        else if (indentificador.compare("putbox") == 0)
        {
            int x0, x1, y0, y1, z0, z1;
            float r, g, b, a;
            ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
            desenho.push_back(new PutBox(x0, x1, y0, y1, z0, z1, r, g, b, a));
        }
        else if (indentificador.compare("putsphere") == 0)
        {
            int xcenter, ycenter, zcenter, radius;
            float r, g, b, a;
            ss >> xcenter >> ycenter >> zcenter >> radius >> r >> g >> b >> a;
            std::cout << "r: " << r << "g: " << g << "b: " << b << "a: " << a << std::endl;
            desenho.push_back(new PutSphere(xcenter, ycenter, zcenter, radius, r, g, b, a));
        }
        else if (indentificador.compare("putellipsoid") == 0)
        {
            int xcenter, ycenter, zcenter, rx, ry, rz;
            float r, g, b, a;
            ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r >> g >> b >> a;
            desenho.push_back(new PutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz, r, g, b, a));
        }
        else if (indentificador.compare("cutvoxel") == 0)
        {
            int x, y, z;
            ss >> x >> y >> z;
            desenho.push_back(new CutVoxel(x, y, z));
        }
        else if (indentificador.compare("cutbox") == 0)
        {
            int x0, x1, y0, y1, z0, z1;
            ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
            desenho.push_back(new CutBox(x0, x1, y0, y1, z0, z1));
        }
        else if (indentificador.compare("cutsphere") == 0)
        {
            int xcenter, ycenter, zcenter, radius;
            ss >> xcenter >> ycenter >> zcenter >> radius;
            desenho.push_back(new CutSphere(xcenter, ycenter, zcenter, radius));
        }
        else if (indentificador.compare("cutellipsoid") == 0)
        {
            int xcenter, ycenter, zcenter, rx, ry, rz;
            ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz;
            desenho.push_back(new CutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz));
        }
    }

    t = new Sculptor(nx, ny, nz);

    for (size_t i = 0; i < desenho.size(); i++)
    {
        desenho[i]->draw(*t);
    }

    t->writeOFF((char *)"teste.off");

    for (size_t i = 0; i < desenho.size(); i++)
    {
        delete t;
    }
}
