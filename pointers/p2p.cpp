/*
    The  pointers to pointers stores the address of pointers. 
*/
#include <iostream>

int main()
{
    int a = 1000;
    int *p = &a; // address of a
    *p =10;     // value of a

    int **q = &p; // address of p
    int ***r = &q; // address of q

    printf(" a = %d\n", *p);  // value of 'a'
    printf("%d\n", *q);  // address of pointer 'p' 
    printf("%d\n", **q); // value of 'a'
    printf("%d\n", **r); // address of pointer 'p'
    printf("%d\n", ***r); // value of 'a'

    ***r = 5;              // changes the value of 'a'
    printf("a = %d\n", a); 

    **q = *p +2;            // value of a can be accessed by *p, **q, ***r.
    printf("a = %d\n", a); 




    

}