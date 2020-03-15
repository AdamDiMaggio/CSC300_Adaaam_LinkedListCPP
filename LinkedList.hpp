#ifndef LinkedList_hpp
#define LinkedList_hpp
#include "Node.hpp"

#include <stdio.h>  //import equivalent

class LinkedList
{
private:
    Node* head; //points to the first element in the linked list
                //Node* holds the address of the first Node object in the linked list

    int count;  //field that tells us how many nodes there are in the linked list
                //this should increment everytime we create a new node object
    
public:
    LinkedList(); //constructor for new linked list, no parameters because we are creating an empty list
    void addFront(int payload);  //method to add a node to the front of the linked list
    int getFront();
    int removeFront(); 
    void addEnd(int payload);
    int getEnd();
    int removeEnd(); 
    Node* findEnd();
    void display();
     
};
#endif /* LinkedList_hpp */