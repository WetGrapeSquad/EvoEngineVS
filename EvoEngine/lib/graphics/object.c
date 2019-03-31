#include "object.h"
#include <malloc.h>

TexCor createTexCor(FVector2 i1, FVector2 i2, FVector2 i3) {
	TexCor tc;
	tc.cor[0] = i1;
	tc.cor[1] = i2;
	tc.cor[2] = i3;
	return tc;
}
Polygon createPoligon(FVector3 polycor, TexCor texcor){
	Polygon poly;
	poly.polycor = polycor;
	poly.textcor = texcor;
}
Model createModel(Polygon *poly, int psize){
	Model mod;
	mod.poly = malloc(psize * sizeof(Polygon));
	for(int i = 0; i < psize; i++){
		mod.poly[i] = poly[i];
	}
	mod.psize = psize;
	return mod;
}