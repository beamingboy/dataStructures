#include "list.h"
#include "node.h"


int main()
{
    int a =10;
    LinkedList ll = LinkedList();
    ll.insertEnd(10);

    std::cout << ll.head << std::endl;
}