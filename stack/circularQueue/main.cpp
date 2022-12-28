#include "queue.h"
int main()
{
    CircularQueue q1(5);

    // cout << q1.front << endl;

    q1.addValue("v");
    q1.addValue("i");
    q1.addValue("n");
    q1.addValue("a");
    q1.addValue("y");
    cout << q1.front << endl;
    cout << q1.currentSize << endl;
    q1.remove();
    cout << q1.currentSize << endl;
    q1.remove();
    q1.remove();
    q1.remove();
    cout << q1.currentSize << endl;
    cout << q1.front << endl;
    q1.addValue("v");
    q1.addValue("i");
    q1.addValue("n");
    q1.addValue("a");
    cout << "------------" << endl;
    cout << q1.front << endl;
    q1.remove();
    cout << q1.front << endl;
    cout << q1.currentSize << endl;
}