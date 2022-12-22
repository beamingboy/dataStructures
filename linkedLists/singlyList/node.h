#ifndef NODE_H
#define NODE_H

#include "list.h"


class Node : public LinkedList
{
    public:
        int data;
        Node *next;
        Node(int d);
};

#endif