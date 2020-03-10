#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void Preorder(Node* root)
{
    if(root==NULL)
        return;
    else
    {
        cout << root->data << " ";
        Preorder(root->left);
        Preorder(root->right);
    }
}

void Postorder(Node* root)
{
    if(root==NULL)
        return;
    else
    {
        Postorder(root->left);
        Postorder(root->right);
        cout << root->data << " ";
    }
}

void Inorder(Node* root)
{
    if(root==NULL)
        return;
    else
    {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}

int main()
{
    Node* a = NULL;
    a = new Node(25);
    a->left = new Node(15);
    a->right = new Node(50);
    a->left->left = new Node(10);
    a->left->right = new Node(20);
    a->right->left = new Node(30);
    a->right->right = new Node(60);
    Node* root = a;
    cout << "Preorder traversal\n";
    Preorder(root);
    cout << "\nInorder traversal\n";
    Inorder(root);
    cout << "\nPostorder traversal\n";
    Postorder(root);
    return 0;
}
