<<<<<<< HEAD:CutVoxel.h
#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class CutVoxel : public FiguraGeometrica
{
    private:
        int x, y, z;
        float r, g, b, a;
    public:
        CutVoxel(int x=0, int y=0, int z=0);
        ~CutVoxel();

        void draw(Sculptor &t);
};

#endif // CUTVOXEL_H
=======
#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "FiguraGeometrica.h"
#include "Sculptor.h"

class CutVoxel : public FiguraGeometrica
{
    private:
        int x, y, z;
        float r, g, b, a;
    public:
        CutVoxel(int x=0, int y=0, int z=0, float r=0, float g=0, float b=0, float a=0);
        ~CutVoxel();

        void draw(Sculptor &t);
};

#endif // CUTVOXEL_H
>>>>>>> bf0a6a0af985d2acbf8519d17cbc4c93c5a947de:header/CutVoxel.h
