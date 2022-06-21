#include "../header/CutSphere.h"

CutSphere::CutSphere(int xc, int yc, int zc, int radius)
{
    // ctor
    this->xcenter = xc;
    this->ycenter = yc;
    this->zcenter = zc;
    this->radius = radius;
}

CutSphere::~CutSphere()
{
    // dtor
}

void CutSphere::draw(Sculptor &t)
{
    t.setColor(r, g, b, a);
    for (int i = -radius; i <= radius; i++)
        for (int j = -radius; j <= radius; j++)
            for (int k = -radius; k <= radius; k++)
                if (i * i + j * j + k * k < radius * radius)
                    t.cutVoxel(xcenter + i, ycenter + j, zcenter + k);

    // caso n�o possa uasr o m�todo do Sculptor, ser� necess�rio pegar os par�metros de tamanho da matriz para ser usado aqui
}