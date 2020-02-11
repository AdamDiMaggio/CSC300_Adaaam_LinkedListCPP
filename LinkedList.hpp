#ifndef LinkedList_hpp    //if not defined, go ahead and define it
#define LinkedList_hpp
#include "Node.hpp"

//#include <stdio.h>

class LinkedList
{
private:
    Node* head;
    int count;
    
public:
    LinkedList();
    void addFront(int payload);
    
};
#endif /* LinkedList_hpp */