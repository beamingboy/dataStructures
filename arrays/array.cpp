#include <iostream>

int main()
{
    char a[]= {'c','b','a','\0'};
    char c[]= {'c','b','a','\0'}; // char ends with null
    std::cout << a[2]<< std::endl;

    std::string b ="hello";
    std::cout << b[5]<< std::endl;
    std::cout << strlen(c)<< std::endl;
    std::cout << strlen(a)<< std::endl;
}