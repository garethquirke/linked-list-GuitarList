/* 
 * File:   main.cpp
 * Author: gareth
 *
 * Created on 01 December 2015, 15:21
 */
/*
 * 9 minutes for class Guitar and methods
 */
#include <iostream>
#include "Guitar.h"
#include "GuitarList.h"
using namespace std;

int main() {
    
    Guitar g(1,"gibson", "guitar");
	Guitar g1;
	g1 = g;
	cout << g1 << endl << endl;
    //g.print();
    //cout << g.getMake();

    GuitarList gl;
   
    gl.addFront(3,"Fender","Stratocastor");
    gl.addFront(2,"Gibson","Les Paul");
    gl.addFront(1,"Martin", "Acoustic");
    gl.addEnd(4,"Fender", "Telecastor");
    gl.display();
    cout << endl << endl;
    
    gl.alterNode(1);
    cout << endl << endl;
    gl.display();
    cout << endl << endl;
    
    gl.deleteMostRecent();
    gl.deleteNodeAt(4);
    gl.display();
    cout << endl << endl;
            
    GuitarList gc(gl);
	gc = gl;
	gc.display();
	cout << endl << endl;

	system("pause");
    return 0;
}

