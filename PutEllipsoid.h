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
    PutEllipsoid();
    ~PutEllipsoid();
    void draw(Sculptor &t);
};

#endif // PUTELLIPSOD_H