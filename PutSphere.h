#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include"FiguraGeometrica.h"
#include "Sculptor.h"

class PutSphere: public FiguraGeometrica
{
    private:
        int xcenter, ycenter, zcenter, radius;
        float r, g, b, a;



    public:
        PutSphere(int xc=0, int yc=0, int zc=0, int radius=0, float r=0, float g=0, float b=0, float a=0);
        ~PutSphere();
        void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
