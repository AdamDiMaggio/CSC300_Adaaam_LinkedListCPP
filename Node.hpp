#ifndef Node_hpp    //if not defined, go ahead and define it
#define Node_hpp

//#include <stdio.h>

class Node
{
private:
    int payload;
    Node* nextNode;
    
public:
    Node(int payload);
    
};
#endif /* Node_hpp */