#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include"FiguraGeometrica.h"
#include "Sculptor.h"

class PutVoxel: public FiguraGeometrica
{
    private:
        int x, y, z;
        float r, g, b, a;
    public:
        PutVoxel(int x=0, int y=0, int z=0, float r=0, float g=0, float b=0, float a=0);
        ~PutVoxel();

        void draw(Sculptor &t);
};

#endif // PUTVOXEL_H
