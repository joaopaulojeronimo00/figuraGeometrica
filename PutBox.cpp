#include "PutBox.h"

PutBox::PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a)
{
    //this-> é p mesmo que (*this).x0. Pois this é o ponteiro que aponta para a posição onde o OBJ está.
    //aqui o x0 passado como parâmetro é inserido no conteúdo de x0 do OBJ, que é uma das propriedades de PutBox
    this->x0=x0;
    this->x1=x1;
    this->y0=y0;
    this->y1=y1;
    this->z0=z0;
    this->z1=z1;
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=a;
    //ctor
}

PutBox::~PutBox()
{
    //dtor
}

void PutBox::draw(Sculptor &t)
{
    t.setColor(r, g, b, a);
    for (unsigned int i = x0; i < x1; i++)
    {
        for (unsigned int j = y0; j < y1; j++)
        {
            for (unsigned int k = z0; k < z1; k++)
            {
                t.putVoxel(i, j, k);
            }
        }
    }
}
