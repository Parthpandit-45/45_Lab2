#pragma once
#include<iostream>

class Stack
{
    Stack (){}
    ~Stack(){}
    virtual void push(int item)=0;
    virtual void pop ()=0;
    virtual void top ()=0;
    virtual bool isEmpty()=0;
};

