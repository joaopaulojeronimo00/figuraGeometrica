#ifndef PUTBOX_H
#define PUTBOX_H
#include "Sculptor.h"
#include "FiguraGeometrica.h"

class PutBox: public FiguraGeometrica
{
    private:
        int x0, x1, y0, y1, z0, z1;
        float r, g, b, a;
    public:
        PutBox(int x0=0, int x1=0, int y0=0, int y1=0, int z0=0, int z1=0, float r=0, float g=0, float b=0, float a=0);
        ~PutBox();
        void draw(Sculptor &t);
};

#endif // PUTBOX_H
