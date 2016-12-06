/* 
 * File:   GuitarNode.h
 * Author: gareth
 *
 * Created on 01 December 2015, 15:37
 */
#pragma once
#include "Guitar.h"
#include "GuitarList.h"

class GuitarNode{
    
    friend class GuitarList;
private:
    Guitar g;
    GuitarNode *next;
public:
    GuitarNode(Guitar gIn);
    void displayNode();
};