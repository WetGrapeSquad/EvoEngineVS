#pragma once
#include "../vector/vector.h"
#include "../types/thf.h"

typedef struct TexCor {
	FVector2 cor[3];
} TexCor;

typedef struct Polygon {
	FVector3 polycor;
	TexCor textcor;
} Polygon;

typedef struct Model {
	Polygon* poly;
	int psize;
} Model;

typedef struct Prefab {
	Model *model;
	EVID id;
	bool visible;
	FVector3 position;
	FVector3 scale;
	FVector3 rotate;
} Prefab;