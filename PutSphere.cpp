#include "PutSphere.h"

PutSphere::PutSphere(int xc, int yc, int zc, int radius, float r, float g, float b, float a)
{
    //ctor
    this->xcenter=xc;
    this->ycenter=yc;
    this->zcenter=zc;
    this->r=r;
    this->g=g;
    this->b=b;
    this->a=a;
}

PutSphere::~PutSphere()
{
    //dtor
}

void PutSphere::draw(Sculptor &t)
{
    t.setColor(r, g, b, a);
    t.putSphere(xcenter, ycenter, zcenter, radius);//pode??
    //caso não possa uasr o método do Sculptor, será necessário pegar os parâmetros de tamanho da matriz para ser usado aqui
}
