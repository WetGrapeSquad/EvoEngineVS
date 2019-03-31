#pragma once
typedef struct IVector2{
	int v;
	int v2;
} IVector2;
typedef struct FVector2{
	float v;
	float v2;
} FVector2;
typedef struct IVector3{
	int v;
	int v2;
	int v3;
} IVector3;
typedef struct FVector3{
	float v;
	float v2;
	float v3;
} FVector3;
typedef struct IVector4{
	int v;
	int v2;
	int v3;
	int v4;
} IVector4;
typedef struct FVector4{
	float v;
	float v2;
	float v3;
	float v4;
} FVector4;


IVector2 setIVector2(int i, int i2);
FVector2 setFVector2(float i, float i2);
IVector3 setIVector3(int i, int i2, int i3);
FVector3 setFVector3(float i, float i2, float i3);
IVector4 setIVector4(int i, int i2, int i3, int i4);
FVector4 setFVector4(float i, float i2, float i3, float i4);