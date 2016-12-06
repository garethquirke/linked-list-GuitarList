#include "Guitar.h"
#include <string>
#include <iostream>
using namespace std;

Guitar::Guitar(){
    id = 0;
    make = " ";
    model = " ";
}

Guitar::Guitar(int idIn, string makeIn, string modelIn){
    id = idIn;
    make = makeIn;
    model = modelIn;
}


Guitar::~Guitar(){
    
}

int Guitar::getId(){
    return id;
}
string Guitar::getMake(){
    return make;
}
string Guitar::getModel(){
    return model;
}

void Guitar::print(){
    cout << "ID: " << id << endl; 
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
}

void Guitar::operator=(const Guitar & g)
{
	id = g.id;
	make = g.make;
	model = g.model;
}
ostream& operator <<(ostream &output, Guitar &g) {
	output << "ID: " << g.id << endl;
	output << "Make: " << g.make << endl;
	output << "Model: " << g.model << endl;
	return output;
}

void Guitar::setID(int idIn){
    id = idIn;
}
void Guitar::setMake(string makeIn){
    make = makeIn;
}
void Guitar::setModel(string modelIn){
    model = modelIn;
}