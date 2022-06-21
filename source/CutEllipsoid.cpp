#include "../header/CutEllipsoid.h"

CutEllipsoid::CutEllipsoid(int xc, int yc, int zc, int radius_x, int radius_y, int radius_z, int r, int g, int b, int a) {
	this -> xcenter = xc; 
    this -> radiusx = radius_x;
	this -> ycenter = yc; 
    this -> radiusy = radius_y;
	this -> zcenter = zc; 
    this -> radiusz = radius_z;
	//ctor
}

CutEllipsoid::~CutEllipsoid()
{
    //dtor
}

void CutEllipsoid::draw(Sculptor& t) {
	double x, y, z;

	for (int i = 0; i < t.getnx(); i++)
		for (int j = 0; j < t.getny(); j++)
			for (int k = 0; k < t.getnz(); k++) {
				x = ((double)(i - xcenter) * (double)(i - xcenter)) / (radiusx * radiusx);
				y = ((double)(j - ycenter) * (double)(j - ycenter)) / (radiusy * radiusy);
				z = ((double)(k - zcenter) * (double)(k - zcenter)) / (radiusz * radiusz);

				if ((x + y + z) < 1)
					t.cutVoxel(i, j, k);
			}
}