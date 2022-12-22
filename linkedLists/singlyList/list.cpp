#include "list.h"
#include "node.h"

LinkedList :: LinkedList()
{
    head = NULL;
}

void LinkedList :: insertEnd(int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
    }else
    {
        Node* current = head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}