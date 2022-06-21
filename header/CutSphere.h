#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include"FiguraGeometrica.h"
#include "Sculptor.h"

class CutSphere: public FiguraGeometrica
{
    private:
        int xcenter, ycenter, zcenter, radius;

    public:
        CutSphere(int xc=0, int yc=0, int zc=0, int radius=0);
        ~CutSphere();
        void draw(Sculptor &t);
};

#endif // CUTSPHERE_H