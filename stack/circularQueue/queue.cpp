#include "queue.h"

CircularQueue :: CircularQueue(int capacity)
{
    front = 0;
    currentSize = 0;
    maxSize = capacity;
    for (int i=0; i<capacity; i++)
    {
        values.push_back("");
    }
}

void CircularQueue :: addValue(string value)
{
    int index = (currentSize + front) % maxSize;
    if(currentSize == 0)
    {
        values.at(front) = value;
        currentSize++;
    }
    else if(index != front)
    {
        values.at(index) = value;
        currentSize++;
    }
}

void CircularQueue :: remove()
{
    string temp = " ";

    if (currentSize > 0)
    {
        currentSize--;
        int tempFront = front;
        front = (front + 1)% maxSize;
        if (currentSize == 0 )
        {
            front = maxSize;
        }
        cout << values.at(tempFront) << endl; 
    }
}

void CircularQueue :: print()
{
    cout<<"no"<<endl;
}

CircularQueue :: ~CircularQueue()
{
    cout << "destroying the queue"<< endl;
}