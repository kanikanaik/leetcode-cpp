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
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "LL is empty" << endl;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LL is empty" << endl;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
};

int main()
{
    LinkedList linkl;
    linkl.push_back(1);
    linkl.push_back(2);
    linkl.push_front(4);
    linkl.push_front(3);

    linkl.pop_front();
    linkl.pop_back();
    linkl.display();
}