#include <string>
#include <sstream>
#include "point.h"
#include <cmath>

using std::string;

suma::suma(string ecua){
	this->ecua = ecua;
}// :: es un operador de ambito
string suma::toString(){
	stringstream ss;
	ss << "[" << ecua << "]";
	return ss.str();
}

void setEcua(string){
	this->ecua = ecua;
}

double suma::suma(string b){
	//b.x = b.y = -1;
	return sqrt(pow(x-b.x,2.0)+pow(y-b.y,2.0));
}