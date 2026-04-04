#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val) : data(val), next(nullptr) {}
    /* data */
};

class LinkedList
{
    Node *head;

public:
    LinkedList() : head(nullptr) {};

    void deleteAtBegin()
    {
        Node *temp = head;
        if (!head)
        {
            cout << "Nothing to delete";
            return;
        }

        head = head->next;
        delete temp;
    }

    void deleteAtEnd()
    {
        if (!head)
        {
            cout << "Nothing to delete";
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }
        Node *temp = head;

        while (temp->next->next)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }

    void insertAtBeginning(int val)
    {
        Node *newNode = new Node(val);
        if (!head)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
        // head->next = newNode->next;
    }

    void insertAtEnd(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtPosition(int val, int pos)
    {
        Node *newNode = new Node(val);
        if (pos == 0)
        {
            newNode->next = head;
            head = newNode;
            return;
        }
        Node *temp = head;
        int idx = 0;
        while (idx < pos - 1 && temp != NULL)
        {
            temp = temp->next;
            idx += 1;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "-> NULL";
    }
};

int main()
{
    LinkedList ll;
    ll.insertAtEnd(20);
    ll.insertAtEnd(12);
    ll.insertAtEnd(14);
    ll.insertAtBeginning(50);
    ll.insertAtPosition(13, 2);
    ll.deleteAtEnd();

    ll.display();
}