/*
    We can use heap by referencing the address to a pointer.
    We always need to free or delete the memory after using it.

    NOTE: The malloc, calloc, realloc and free is used in C.
          The new and delete is used in C++.
*/

#include <iostream>

int main()
{
    int a; 
    int b;
    int *p;

    p = new int;  // pointer stores the address of heap
    *p = 10;      // use put 10 at heap using pointers

    a = *p;       // We use pointer to access the heap memory
    delete p;     // It is responsibility of programmer to free the space.

    b = *p;
    p = new int[10];  // pointer stores the address of first element
    // this is used to declare the array at heap

    delete[] p;

    std::cout<< "b- "<<b<<std::endl // result random
            << "a- "<<a<<std::endl; // result = 10;


}