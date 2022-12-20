/*
    The pointers are the variable that stores the address 
    of another variable.
*/
#include <iostream>

int main()
{
    int a = 1000;
    int *p ;    // initialization 
    p = &a;     // & is used to get the address
    
    std::cout << p << std::endl; // result = address of 'a'
    printf("address of a: %d\n",p); // result = address in decimal
    printf("value of a: %d\n",*p); // value in decimal
    std::cout << *p << std::endl; // result = 10 (value of 'a')
    std::cout << p+1 << std::endl; // result = address of after 4 bytes because 'a' is integer
    
    /*
        NOTE: The *p during initialization is different from *p when
              accessing the value.
    */

   char *p0;
   p0 = (char *)p; // Typecasting
   
   printf("address of a: %d\n",p0); // address in decimal = address of 'a'
   printf("value of a: %d\n",*p0); // value of a in decimal
   /*
        Now, as we have changed the int to char the bytes have changed,
        from 4 bytes to 1 byte.
        a = 1000 = 00000000 00000000 00000011 11101000 (4bytes)
        after changing
        a = -24(in decimal) = 11101000 (1byte)
   */
   std::cout << p0 << std::endl;  // address of 'a'
   std::cout << *p0 << std::endl; // value of 'a'
  
    
}