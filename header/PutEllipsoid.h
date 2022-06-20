#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class PutEllipsoid : public FiguraGeometrica{
protected:
	int xcenter, ycenter, zcenter, radiusx, radiusy, radiusz;


public:
PutEllipsoid(int xc, int yc, int zc, int radius_x, int radius_y, int radius_z, int r, int g, int b, int a)
~PutEllipsoid() {};
	void draw(Sculptor& t);
};

#endif // PUTELLIPSOID_H