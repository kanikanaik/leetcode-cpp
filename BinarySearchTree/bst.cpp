#include <vector>
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    };
};

static int idx = -1;
Node *buildTree(vector<int> preOrder)
{
    idx++;

    if (preOrder[idx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);
    return root;
}

void pre(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    pre(root->left);
    pre(root->right);
}
void in(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    in(root->left);
    cout << root->data << " ";
    in(root->right);
}

int main()
{
    // vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1,4};
    vector<int> preOrder = {1,-1,2,3};
    Node *root = buildTree(preOrder);
    in(root);

    // cout << root->data << endl;
}