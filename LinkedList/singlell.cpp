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
        cout << "NULL\n";
    }
    void push_back(int val)
    {
        // When pushed in back newdata = val, temp = head
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

    void push_front(int val)
    {
        // When pushed in front newdata = val, temp = head
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
};

int main()
{
    LinkedList ll;
    ll.push_front(13);
    ll.push_front(26);
    ll.push_back(39);

    ll.display();
}