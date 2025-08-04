#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList
{
    Node *head;
    Node *tail;

public:
    LinkedList()
    {
        head = tail = NULL;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }

    void push_back(int val){
        if(head == NULL){
            
        }
    }
};

int main()
{
}