#include "../header/PutEllipsoid.h"

PutEllipsoid::PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry,
                             int rz, float r, float g, float b, float a)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
    // ctor
}

PutEllipsoid::~PutEllipsoid()
{
    // dtor
}

void PutEllipsoid::draw(Sculptor &t)
{
    double x, y, z;
    //CONFERIR SE USANDO RX, RY E RZ FUNCIONARÁ
    //A IDEIA É VARRER O BOX EM QUE O ELIPSOID ESTÁ INCLUSO E COLOCAR APENAS OS VOXELS QUE ESTÃO DENTRO DO ELIPSOIDE
    for (int i = 0; i < xcenter+rx ; i++)
        for (int j = 0; j < ycenter+ry; j++)
            for (int k = 0; k < zcenter+rz ; k++)
            {
                x = ((double)(i - xcenter) * (double)(i - xcenter)) / (rx * rx);
                y = ((double)(j - ycenter) * (double)(j - ycenter)) / (ry * ry);
                z = ((double)(k - zcenter) * (double)(k - zcenter)) / (rz * rz);

                if ((x + y + z) < 1)
                    t.putVoxel(i, j, k);
            }
}