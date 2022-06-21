#ifndef PUTELLIPSOD_H
#define PUTELLIPSOD_H
#include <iostream>
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class PutEllipsoid : public FiguraGeometrica
{
    private:
    int xcenter, ycenter, zcenter, rx, ry, rz;
    float r, g, b, a;
    public:
    PutEllipsoid(int xcenter=0, int ycenter=0, int zcenter=0, int rx=0, int ry=0, 
                int rz=0, float r=0, float g=0, float b=0, float a=0);
    ~PutEllipsoid();
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOD_H