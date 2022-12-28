/*
    This is a circular queue using the stl array.
*/

#ifndef QUEUE_H
#define QUEUE_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;
class CircularQueue 
{
    public:
        int front;
        int currentSize;
        int maxSize;
        std::vector<string> values; 
    
    public:
        CircularQueue(int capacity);
        void addValue(string data);
        void print();
        void remove();
        ~CircularQueue();

};
#endif
