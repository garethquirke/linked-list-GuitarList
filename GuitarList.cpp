#include <string>
#include "GuitarList.h"

GuitarList::GuitarList():head(NULL){
    
}
GuitarList::~GuitarList(){
    while(head!=NULL){
        deleteMostRecent();
    }
}

GuitarList::GuitarList(const GuitarList & gl)
{
	head = NULL;
	*this = gl;
}
ostream &operator << (ostream &output, GuitarList &gl) {
	gl.display();
	return output;
}

const GuitarList & GuitarList::operator=(const GuitarList & gl)
{
	if (this != &gl) {
		if (head != NULL) {
			while (head)
				deleteMostRecent();
		}
		GuitarNode *copy = NULL;
		GuitarNode *original = gl.head;
		while (original != NULL) {
			if (head == NULL) {
				Guitar g(original->g.id, original->g.make, original->g.model);
				head = copy = new GuitarNode(g);

			}
			else {
				Guitar g(original->g.id, original->g.make, original->g.model);
				copy->next = new GuitarNode(g);
				copy = original->next;
			}
			original = original->next;
		}
	}
	return *this;
}


void GuitarList::addFront(int idIn, string makeIn, string modelIn){
    Guitar g(idIn, makeIn, modelIn);
    GuitarNode *newN = new GuitarNode(g);
    newN->next = head;
    head = newN;
}
void GuitarList::addEnd(int idIn, string makeIn, string modelIn){
    Guitar g(idIn, makeIn, modelIn);
    GuitarNode *newNode = new GuitarNode(g);
    GuitarNode *temp = NULL;
    if(!head){
        head = newNode;
    }
    else{
        for(temp = head; temp->next; temp = temp->next);
        temp->next = newNode;
    }
}

void GuitarList::alterNode(int idIn){
    GuitarNode *lead = head;
    GuitarNode *trail = NULL;
    if(head->g.id == idIn){
        cout << "Enter new ID: " << endl;
        cin >> head->g.id;
        cout << "Enter new Make: " << endl;
        cin >> head->g.make;
        cout << "Enter new model: " << endl;
        cin >> head->g.model;
    }
    
    else{
        while(lead!=NULL && lead->g.id != idIn){
            trail = lead;
            lead = lead->next;
        }
        if(lead == NULL){
            cout << "Node: " << idIn << " could not be found" << endl;
        }
        else{
            cout << "Enter new ID: " << endl;
            cin >> head->g.id;
            cout << "Enter new Make: " << endl;
            cin >> head->g.make;
            cout << "Enter new model: " << endl;
            cin >> head->g.model;
        }
    }
    
}

void GuitarList::deleteMostRecent(){
    GuitarNode* temp = head;
    temp = temp->next;
    delete head;
    head = temp;
}
void GuitarList::deleteNodeAt(int idIn){
    GuitarNode *lead = head;
    GuitarNode*trail = NULL;
    
    if(head->g.id == idIn){
        lead = lead->next;
        delete head;
        head = lead;
    }
    else{
        while(lead!= NULL && lead->g.id!= idIn){
            trail = lead;
            lead = lead->next;
        }
        if(lead == NULL){
            cout << "node not found" << endl;
        }
        else{
            trail->next = lead->next;
            delete lead;
        }
    }
    
}

void GuitarList::display(){
    GuitarNode* temp = head;
    while(temp!=NULL){
        temp->displayNode();
        temp = temp->next;
    }
}
