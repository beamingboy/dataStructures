/*
    The simple stack only have a fixed number of space.
*/


#ifndef STACK_H
#define STACK_H

#include <iostream>

using namespace std;

class Stack
{
    private:
        int top;
        int array[5];
    
    public:
        stack();
        int count();
        void pop();
        void push(int data);
        bool isEmpty();
        bool isFull();
        void change();
        void print();
        ~stack();

};
#endif