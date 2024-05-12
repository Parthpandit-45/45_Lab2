#include "stack.h"
#include "LinkedList.h"
class Node
{
    public:
        int info;
        Node *next;
        Node (int info);

};


class LinkedListStack: public Stack
{
    public:
        LinkedListStack();
        ~LinkedListStack();
        void push (int item);
        void pop();
        void top();
        bool isEmpty();
    private:
        LinkedList l;
        Node *HEAD;
};
