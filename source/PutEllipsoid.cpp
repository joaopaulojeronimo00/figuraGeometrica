#include "PutEllipsoid.h"

PutEllipsoid::PutEllipsoid(int xc, int yc, int zc, int radius_x, int radius_y, int radius_z, int r, int g, int b, int a) {
	this -> xcenter = xc; 
    this -> radiusx = radius_x;
	this -> ycenter = yc; 
    this -> radiusy = radius_y;
	this -> zcenter = zc; 
    this -> radiusz = radius_z;
	this -> r = r;
	this -> g = g;
	this -> b = b;
	this -> a = a;
}

PutEllipsoid::~PutEllipsoid()
{
    //dtor
}

void PutEllipsoid::draw(Sculptor& t) {

	t.setColor(r, g, b, a);

	double x, y, z;

	for (int i = 0; i < t.getnx(); i++)
		for (int j = 0; j < t.getny(); j++)
			for (int k = 0; k < t.getnz(); k++) {
				x = ((double)(i - xcenter) * (double)(i - xcenter)) / (radiusx * radiusx);
				y = ((double)(j - ycenter) * (double)(j - ycenter)) / (radiusy * radiusy);
				z = ((double)(k - zcenter) * (double)(k - zcenter)) / (radiusz * radiusz);

				if ((x + y + z) < 1)
					t.putVoxel(i, j, k);
			}
}