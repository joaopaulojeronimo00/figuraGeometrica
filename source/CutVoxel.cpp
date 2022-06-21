#include "CutVoxel.h"

<<<<<<< HEAD:CutVoxel.cpp
CutVoxel::CutVoxel(int x, int y, int z)
=======
CutVoxel::CutVoxel(int x, int y, int z, float r, float g, float b, float a)
>>>>>>> bf0a6a0af985d2acbf8519d17cbc4c93c5a947de:source/CutVoxel.cpp
{
    this->x=x;
    this->y=y;
    this->z=z;
<<<<<<< HEAD:CutVoxel.cpp
=======
    this->r=r;
    this->g=g;
    this->b=b;
>>>>>>> bf0a6a0af985d2acbf8519d17cbc4c93c5a947de:source/CutVoxel.cpp
    this->a=a;
}

CutVoxel::~CutVoxel()
{
    //destructor
}

void CutVoxel::draw(Sculptor &t){
<<<<<<< HEAD:CutVoxel.cpp
=======
    t.setColor(r, g, b, a);
>>>>>>> bf0a6a0af985d2acbf8519d17cbc4c93c5a947de:source/CutVoxel.cpp
    t.cutVoxel(x, y, z);
}
