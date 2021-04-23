#include "scuptor.h"
#include "figurageometrica.h"
#include "cutbox.h"

cutBox::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){
    this->x0=x0; this->x1=x1; this->y0=y0; this->y1=y1; this->z0=z0; this->z1=z1;
};

void cutBox::draw(scuptor &asd){
    asd.cutBox(x0, x1, y0, y1, z0, z1);
};
