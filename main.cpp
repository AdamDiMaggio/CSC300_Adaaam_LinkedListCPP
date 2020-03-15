#include "LinkedList.hpp"
#include <iostream>

int main()
{
    LinkedList* ll = new LinkedList();
    ll->addFront(1);
    ll->addFront(2);
    ll->addFront(3);
    ll->addEnd(4);
    ll->display();
    std::cout<< "Last Payload in the List: " << ll->getEnd() << "\n";
    std::cout<< "End Payload has been removed: " << ll->removeEnd() << "\n";
    std::cout<< "Last Payload in the List: " << ll->getEnd() << "\n";




    
    //std::cout<< "Removed value: " << ll->removeFront() << "\n";
      
    delete ll;



}