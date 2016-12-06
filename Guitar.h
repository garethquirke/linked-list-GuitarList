/* 
 * File:   Guitar.h
 * Author: gareth
 *
 * Created on 01 December 2015, 15:21
 */
#include <iostream>
using namespace std;
#pragma once

class Guitar{
    
    friend class GuitarNode;
    friend class GuitarList;
	friend ostream& operator << (ostream &output, Guitar &g);
private:
    
    int id;
    string make;
    string model;
    
public:
    Guitar();
    ~Guitar();
    Guitar(int idIn, string makeIn, string modelIn);
   
    void print();

	void operator=(const Guitar &g);
    
    int getId();
    string getMake();
    string getModel();
    void setID(int idIn);
    void setMake(string makeIn);
    void setModel(string modelIn);
};

