#include "stack.h"

Stack :: Stack()
{
    top = -1;
    for(int i =0 ; i<sizeof(array)/4; i++)
    {
        array[i] = 0;
    }
}

void Stack :: push(int data)
{
    top++;
    array[top] = data;
}

void Stack :: pop()
{
    array[top] = 0;
    top--;
    
}
int Stack :: count()
{
    return top+1;
}

bool Stack :: isEmpty()
{
    if(top == -1) 
        return true;
    else
        return false;
}
bool Stack :: isFull()
{
    if((top+1) == sizeof(array)/4)
        return true;
    else
        return false;
}

void Stack :: print()
{
    for(int i =0 ; i<=top; i++)
    {
        cout << array[i] << "-";
    }
    cout << endl;
}

Stack :: ~Stack()
{
    cout<< "destroying the stack"<<endl;
}