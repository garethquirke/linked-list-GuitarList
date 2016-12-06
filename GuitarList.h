/* 
 * File:   GuitarList.h
 * Author: gareth
 *
 * Created on 01 December 2015, 15:35
 */

#pragma once
#include "GuitarNode.h"

class GuitarList{
    
	friend ostream &operator << (ostream &output, GuitarList &gl);

private:
    
    GuitarNode *head;
    
public:
    
    GuitarList();
    ~GuitarList();
	//copy constructor interacts with the overaloded =
	GuitarList(const GuitarList &gl);
	const GuitarList &operator = (const GuitarList &gl);
    
    void addFront(int idIn, string makeIn, string modelIn);
    void addEnd(int idIn, string makeIn, string modelIn);
    void alterNode(int idIn);
    void deleteMostRecent();
    void deleteNodeAt(int idIn);
    void display();
    
    
};

