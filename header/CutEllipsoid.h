#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class CutEllipsoid : public FiguraGeometrica{
protected:
	int xcenter, ycenter, zcenter, radiusx, radiusy, radiusz;
public:
CutEllipsoid(int xc, int yc, int zc, int radius_x, int radius_y, int radius_z);
~CutEllipsoid();
	void draw(Sculptor& t);
};

#endif // CUTELLIPSOID_H