#include "stack.h"
int main()
{
    Stack stack1;
    cout << stack1.isEmpty() << endl;
    stack1.push(1);
    cout << stack1.isEmpty() << endl;
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    cout << stack1.isFull() << endl;
    stack1.push(5);
    cout << stack1.isFull() << endl; 


    stack1.print();

    stack1.pop();

    stack1.print();
}