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

void inOrder(Node* root)
{
    //left root right
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout << root-> data << " ";
    inOrder(root->right);
}
int main()
{

    vector<int> arr = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    // vector<int> arr = {1,-1,2,3};
    Node* root = buildTree(arr);
    inOrder(root);
}