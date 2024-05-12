#include <iostream>
#include "LinkedListStack.h"
#include "LinkedList.h"
#include "stack.h"
Node::Node (int infoin)
{
    info=infoin;
    next=NULL;

}
bool LinkedListStack::isEmpty()
{
    if (HEAD==NULL)
       return true;
    else
        return false;


}
bool  LinkedListStack::
bool LinkedListStack::pop()
{
    if (HEAD==NULL)
        std::cout<<"Stack Underflow"<<std::endl;
    else    
        Node *t=HEAD;
        std::cout<<"The popped element:"<<t->info 
        HEAD= t->next;
        delete t;

}



