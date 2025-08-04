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

    void insert(int val, int pos)
    {
        Node *newNode = new Node(val);
        Node *temp = head;
        if (pos < 0)
        {
            cout << "Invalid position\n";
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }
        else
        {
            for (int i = 0; i < pos - 1; i++)
            {
                if(temp == NULL){
                    cout << "Invalid pos";
                }
                temp = temp->next;
            }
            
            newNode->next = temp->next;
            temp->next = newNode;
        }
    }
};

int main()
{
    LinkedList linkl;
    linkl.push_back(1);
    linkl.push_back(2);
    linkl.push_back(4);
    linkl.push_back(5);
    linkl.insert(3, 5);
    // linkl.push_front(4);
    // linkl.push_front(3);
    // linkl.push_front(2);
    // linkl.push_front(1);

    // linkl.pop_front();
    // linkl.pop_back();
    linkl.display();
}
