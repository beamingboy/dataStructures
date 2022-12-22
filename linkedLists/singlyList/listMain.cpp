#include <iostream>

using namespace std;

class LinkedList
{
    public:
        class Node
        {
            public:
                int data;
                Node* next;
                Node(int d)
                {
                    data = d;
                    next = NULL; 
                }
        };
        Node* head;

        LinkedList()
        {
            head = NULL;
        }
        void insertEnd(int data)
        {
            Node *newNode = new Node(data);

            if(head ==NULL)
            {
                head = newNode;
            }
            else
            {
                Node *current = head;
                while(current->next !=NULL)
                {
                    current = current->next; 
                }
                current->next = newNode;
            }
        }

        void printList()
        {
            Node *current = head;
            if(head == NULL)
            {
                cout << "The List is empty"<< endl;
            }
            else
            {
                while(current !=NULL)
                {
                    cout<< current->data << "->";
                    current = current->next;
                }
                cout <<"NULL"<< endl;
            }
            
        }

        void searchList(int d)
        {
            Node *current = head;
            if(head ==NULL)
            {
                cout<<"The list is empty"<<endl;
            }
            else
            {
                int i = 1;
                while(current->data != d)
                {
                    i++;
                    current = current->next;
                }
                cout <<"The node "<< i << " have "<<d<< endl;
            }
        }
        void deleteNode(int d)
        {
            Node *current = head;
            Node *temp = current;
            if(head ==NULL)
            {
                cout<<"The list is empty"<<endl;
            }
            else
            {
                while(current->data != d)
                {
                    temp = current;
                    current = current->next;
                    
                }
            
                temp->next = current->next;
                delete current;
                
            }
        }
};

int main()
{
    LinkedList list1 = LinkedList();

    cout << list1.head<< endl;
    list1.insertEnd(10);
    list1.insertEnd(20);
    list1.insertEnd(30);

    list1.printList();
    list1.searchList(20);
    list1.deleteNode(20);

    list1.printList();

    // cout << list1.head->data<< endl;


}