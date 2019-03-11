#pragma once
struct var {
	float   vf;     // 1 - float/int
	char    vc;     // 2 - char
	char*   vs;     // 3 - string
	int   type;     // type data
	char*   vn;     // var name
};


float StringToFloat(char* str);
int newvar(char* varname, char* cont);
int setvar(char* varname, char* cont);
int delvar(char* varname);
void initd();
var getvar(char* varname);
