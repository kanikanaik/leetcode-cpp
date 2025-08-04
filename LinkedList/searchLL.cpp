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
    };

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void pop_front()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "Linked List is empty";
        }
        else
        {
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }
    void pop_back()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "Linked List is empty";
        }
        else
        {
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
        }
    }

    int search(int key)
    {
        Node *temp = head;
        int idx = 0;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }
};

int main()
{
    LinkedList linkl;
    linkl.push_back(1);
    linkl.push_back(2);
    linkl.push_back(3);
    linkl.push_back(4);
    
    cout <<"Searching 3 :" << linkl.search(7)  << endl;

    linkl.display();
}
