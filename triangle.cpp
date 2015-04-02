#include "triangle.h"
#include <iostream>
#include <fstream>

using namespace std;



triangle::triangle(int b, int h){
	base=b;
	height=h;
	area=(0.5)*base*height;
}

triangle::triangle(const triangle &source){
	base=source.base;
	height=source.height;
	area=source.area;
}

triangle::~triangle(){
	base=0;
	height=0;
	area=0;
}
                
triangle& triangle::operator=(const triangle &source){
	if (&source !=this){	
	base=source.base;
	height=source.height;
	area=source.area;
}
	return *this;
}

bool triangle::operator==(const triangle &source) const{
	if (base==source.base && height==source.height && area==source.area) return true;
	else
		return false;
}

triangle operator+(const triangle &source1, const triangle &source2){
	triangle temp;	
	temp.base=source1.base + source2.base;
	temp.height=source1.height + source2.height;
	temp.area=0.5 * temp.base * temp.height;
	return temp;
}
                
ostream& operator<<(ostream &out, triangle &source){
	out<<endl<<"base:  "<<source.base<<endl<<"height:  "
	    <<source.height<<endl<<"area:  "<<source.area<<endl;
	return out;
}


ifstream& operator>>(ifstream &in, triangle &destination){
	in>>destination.base;
	in>>destination.height;
	destination.area=0.5*destination.base*destination.height;
	return in;
}
