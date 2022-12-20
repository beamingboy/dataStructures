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
        |  fun(x)   | --> stack call
        | int x = a |
        |-----------|
        |  main{    | --> stack frame
        |   int a;  |
        |  fun(a);  |
        |  }        |
         ----------- 
        
        If, we can use the pointers to store the address of variable in main,
         and pass it to the functions. As shown in Increment().

    2. Array as function argument:
        As for arrays the stack call dose not copy the array, but instead it creates a
        pointer pointing towards the first element of the array.
        The stack tries to save the memory and all the changes made in the function reflects,
        in the main array. 

             Stack
         -----------
        |           |
        |-----------|
        |  fun(x[]) | --> stack call
        | x = &a[0] |
        |-----------|
        |  main{}   | --> stack frame
        |   int a[];|
        | fun(a)    |
         ----------- 
*/
#include <iostream>

void Increment(int *p)
{
    *p = *p +1;
}

void doubleArray(int array[],int size)
{
    for(int i =0; i < size; i++)
    {
        *(array + i) = (*(array + i ))* 2;
    }
}

int main()
{
    // example for (1)
    int a = 10;
    Increment(&a);
    std::cout<< "after increment: "<< a << std::endl;

    // Example for (2)

    int array[] = {1,2,3,4,5};
    /* 
        NOTE: We cannot use this method inside function,
              because the size of array will be 4(bytes) instead of 20.
              as the array inside the function is just a pointer pointing
              to the array's elements.
    */
    int size = sizeof(array)/sizeof(array[0]);
    doubleArray(array,size);

    for(int i =0; i < size; i++)
    {
        std::cout<< "array"<<i<<"-"<<array[i]<<std::endl;
    }
}