#include "vector.h"

IVector2 setIVector2(int i, int i2){
	IVector2 vect = {i, i2};
	return vect;
}
FVector2 setFVector2(float i, float i2) {
	FVector2 vect = { i, i2 };
	return vect;
}
IVector3 setIVector3(int i, int i2, int i3) {
	IVector3 vect = { i, i2, i3 };
	return vect;
}
FVector3 setFVector3(float i, float i2, float i3) {
	FVector3 vect = { i, i2, i3 };
	return vect;
}
IVector4 setIVector4(int i, int i2, int i3, int i4) {
	IVector4 vect = { i, i2, i3, i4 };
	return vect;
}
FVector4 setFVector4(float i, float i2, float i3, float i4) {
	FVector4 vect = { i, i2, i3, i4 };
	return vect;
}