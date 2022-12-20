/*
    Now, I will be dividing the topic in different parts:

    1. Pointers as function argument:
        When we pass the variable into the functions, the stack call is made and
        the variable from main is copied to new variable created by the function.
        The changes made to the variable function does not change the variable in main.

            Stack
         -----------
        |           |
        |-----------|
        |  fun(a)   | --> stack call
        | int x = a |
        |-----------|
        |  main{}   | --> stack frame
        |   int a;  |
         ----------- 
        
        If, we can use the pointers to store the address of variable in main,
         and pass it to the functions. As shown in Increment().

    2. Array as function argument 
*/
#include <iostream>

void Increment(int *p)
{
    *p = *p +1;
}

int main()
{
    // example for (1)
    int a = 10;
    Increment(&a);
    std::cout<< "after increment: "<< a << std::endl;
}