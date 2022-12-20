/*
    We can use pointers to access the array values. But we need to assign the
    address of array elements to a pointer. 
*/
#include <iostream>

int main()
{
    int array[] = {1,2,3,4,5};
    int *p = array;
    int *q = array+2;
    /*
        Here, address = array = &array[0]
              value = array[i] = *(array+i)
    */
   
   std::cout << array << std::endl; // address of first element
   std::cout << p << std::endl;     // address of first element
   std::cout << *p << std::endl;    // value of first element
   std::cout << *(q-2) << std::endl;// value of first element
   
}