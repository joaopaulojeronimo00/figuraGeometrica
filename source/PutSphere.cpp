#include "PutSphere.h"

PutSphere::PutSphere(int xc, int yc, int zc, int radius, float r, float g, float b, float a)
{
    // ctor
    this->xcenter = xc;
    this->ycenter = yc;
    this->zcenter = zc;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

PutSphere::~PutSphere()
{
    // dtor
}

void PutSphere::draw(Sculptor &t)
{
    t.setColor(r, g, b, a);
    for (int i = -radius; i <= radius; i++)
        for (int j = -radius; j <= radius; j++)
            for (int k = -radius; k <= radius; k++)
                if (i * i + j * j + k * k < radius * radius)
                    t.putVoxel(xcenter + i, ycenter + j, zcenter + k);

    // caso n�o possa uasr o m�todo do Sculptor, ser� necess�rio pegar os par�metros de tamanho da matriz para ser usado aqui
}
