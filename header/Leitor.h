
#ifndef LEITOR_H
#define LEITOR_H

#include "FiguraGeometrica.h"
#include <string.h>
#include "Sculptor.h"

class Leitor
{
    private:
    Sculptor* t;
    int nx, ny, nz;

    public:
    Leitor(Sculptor* t);
    ~Leitor();

    void ler(std::string arq);

};
#endif // LEITOR_H