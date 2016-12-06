#include "GuitarNode.h"
#include "Guitar.h"
#include <string>
//Make node friend of guitar class 
GuitarNode::GuitarNode(Guitar gIn){
    g = gIn;
    next = NULL;
}

void GuitarNode::displayNode(){
    cout << "ID: " << g.id << endl;
    cout << "Make: " << g.make << endl;
    cout << "Model: " << g.model << endl;
}
