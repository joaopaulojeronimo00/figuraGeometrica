#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class CutVoxel : public FiguraGeometrica
{
    private:
        int x, y, z;
    public:
        CutVoxel(int x=0, int y=0, int z=0);
        ~CutVoxel();

        void draw(Sculptor &t);
};

#endif // CUTVOXEL_H
