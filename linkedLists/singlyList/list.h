#ifndef LIST_H
#define LIST_H
#include <iostream>

class LinkedList
{
    public:
        struct Node
        {
            int data;
            Node *next;
            Node(int d);
        };
        Node *head;

        LinkedList();
        void insertEnd(int data);
};

#endif