#include "CutVoxel.h"

CutVoxel::CutVoxel(int x, int y, int z)
{
    this->x=x;
    this->y=y;
    this->z=z;
    this->a=a;
}

CutVoxel::~CutVoxel()
{
    //destructor
}

void CutVoxel::draw(Sculptor &t){
    t.cutVoxel(x, y, z);
}
