/*
    The  Void pointers (generic pointer) 
*/
#include <iostream>

int main()
{
    int a = 1000;
    int *p;
    p = &a;


    void *p0;
    p0 = p; // without typecasting because the pointer is void.

}