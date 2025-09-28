#include <iostream>
using namespace std;

// struct Node
// {
//     int data;
//     Node *next;

//     Node(int val) : data(val), next(nullptr) {}
// };

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class LinkedList
{
    ListNode *head;
    ListNode *tail;

public:
    LinkedList()
    {
        head = tail = NULL;
    }

    void display()
    {
        ListNode *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{
}