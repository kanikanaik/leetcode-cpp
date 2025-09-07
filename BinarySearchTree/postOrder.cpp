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
void post(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    post(root->left);
    post(root->right);
    cout << root->data << " ";
}

int main()
{
    vector<int> preOrder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    // vector<int> preOrder = {1,-1,2,3};
    Node *root = buildTree(preOrder);
    post(root);

    // cout << root->data << endl;
}