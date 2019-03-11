#include "data_header.h"
#include "iostream"

////////////////////////
char***  vn; //////////
//////////////////////
float*   vf; ////////
int      fs; ///////
///////////////////
char*    vc; /////
/////////////////
char**   vs; ///
///////////////

void initd() {
	vn = nullptr;
	vs = nullptr;
	vc = nullptr;
	vs = nullptr;
}

int strlen(char* str) {
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}
/// vn[varnum][0 - name/ 1 - numberv][symbol] ///
bool varNoCreated(char* varname) {
	if (vn == nullptr)
		return true;
	else {
		int i = 0;
		for (i = 0; vn[i][0][0] != '\0'; i++) {
			if (vn[i][0] == varname)
				return false;
		}
		return true;

	}
}

void createVar(var Var) {
	int i = 0, value = strlen(Var.vn);
	if (vn == nullptr) {
		vn = new char**[2];
		vn[1] = new char*[2];
		vn[1][0] = new char[1];
		vn[1][0][0] = '\0';
		i = 0;
	}
	else {
		char***  vn1;
		for (i = 0; vn[i][0][0] != '\0'; i++);
		vn1 = new char**[i + 2];
		for (int j = 0; j < i + 1; j++) {
			int g;
			for (g = 0; vn[j][0][g] != '\0'; g++);

			vn1[j] = new char*[2];
			vn1[j][0] = new char[g];

			for (int s = 0; s < g; s++) {
				vn1[j][0][s] = vn[j][0][s];
			}

			for (g = 0; vn[j][1][g] != '\0'; g++);

			vn1[j][0] = new char[g];

			for (int s = 0; s < g; s++) {
				vn1[j][1][s] = vn[j][1][s];
			}
		}
	}
	vn[i][0] = new char[value + 1];
	for (int j = 0; j < value; j++) {
		vn[i][0][j] = Var.vn[j];
	}
	vn[i][0][value] = '\0';
}


float StringToFloat(char* str) {
	int ps = false, value = strlen(str), g = 0;
	float p = 0, i = 0;
	while (str[g] != '\0') {
		if (ps)
			p++;
		if (str[g] == '0')
			i *= 10;
		else if (str[g] == '1') {
			i *= 10;
			i += 1;
		}
		else if (str[g] == '2') {
			i *= 10;
			i += 2;
		}
		else if (str[g] == '3') {
			i *= 10;
			i += 3;
		}
		else if (str[g] == '4') {
			i *= 10;
			i += 4;
		}
		else if (str[g] == '5') {
			i *= 10;
			i += 5;
		}
		else if (str[g] == '6') {
			i *= 10;
			i += 6;
		}
		else if (str[g] == '7') {
			i *= 10;
			i += 7;
		}
		else if (str[g] == '8') {
			i *= 10;
			i += 8;
		}
		else if (str[g] == '9') {
			i *= 10;
			i += 9;
		}
		else if (str[g] == '.') {
			ps = true;
		}
		else {
			for (int s = 0; s < p; s++) {
				i /= 10;
			}
			return  i;
		}
		g++;
	}
	for (int s = 0; s < p; s++) {
		i /= 10;
	}
	return  i;
}

int newvar(char* varname, char* cont) {
	var Var;
	bool is_int = true;
	int i = 0, value = strlen(varname);
	Var.vn = new char[value + 1];
	for (int j = 0; j < value; j++) {
		Var.vn[j] = varname[j];
	}
	Var.vn[value] = '\0';
	value = strlen(cont);
	char *str = new char[value + 1];
	for (int j = 0; j < value; j++) {
		str[j] = cont[j];
	}
	str[value] = '\0';
	while (i < value) {
		if (!(str[i] == '0' || cont[i] == '1' || cont[i] == '2' || cont[i] == '3' || cont[i] == '4' || cont[i] == '5' || cont[i] == '6' || cont[i] == '7' || cont[i] == '8' || cont[i] == '9' || str[i] == '.' || str[i] == ','))
			is_int = false;
		if (str[i] == '\'') {
			//            while(cont[i] == '\'' || cont[i] == '\0')
			//                i++;
			i++;
			if (str[i + 1] == '\'') {
				Var.type = 2;
				Var.vc = str[i];
			}
			else {
				return -1;
			}
		}
		if (str[i] == '"') {
			i++;
			int j = i;
			while (!(cont[i] == '"' || cont[i] == '\0'))
				i++;
			if (cont[i] == '\0')
				return -1;
			Var.vs = new char[i - j + 1];
			for (int g = 0; g < i - j; g++) {
				Var.vs[g] = cont[g + j];
			}
			Var.vs[i - j] = '\0';
			Var.type = 3;
		}

		i++;
	}
	i = 0;
	if (is_int) {
		bool fp = true;
		while (str[i] != '\0') {
			if (str[i] == ',' && fp) {
				str[i] = '.';
				fp = false;
			}
			i++;
		}
		Var.type = 1;
		Var.vf = StringToFloat(str);
		if (Var.vf == 0.0f)
			Var.type = 0;
	}
	if (varNoCreated(varname))
		createVar(Var);
	else
		return -1;
}
int setvar(char* varname, char* cont) 
{

}
var getvar(char* varname) 
{

}

int delvar(char* varname) 
{

}
