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

int search(Node* root, int valueToBeSearched)
{
    if(root==NULL)
        return 0;
    else if(root->data==valueToBeSearched)
        return 1;
    else if(valueToBeSearched<root->data)
        search(root->left,valueToBeSearched);
    else
        search(root->right,valueToBeSearched);
}

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
    int valueToBeSearched;
    Node* a = NULL;
    a = new Node(25);
    a->left = new Node(15);
    a->right = new Node(50);
    a->left->left = new Node(10);
    a->left->right = new Node(20);
    a->right->left = new Node(30);
    a->right->right = new Node(60);
    Node* root = a;
    //cout << a->left->data;
    cout << "Preorder traversal\n";
    Preorder(root);
    cout << "\nInorder traversal\n";
    Inorder(root);
    cout << "\nPostorder traversal\n";
    Postorder(root);
    cout << "\nEnter value to be searched: ";
    cin >> valueToBeSearched;
    if(search(root,valueToBeSearched))
        cout << "The tree contains the given value";
    else
        cout << "The tree does not contain the given value";
    delete root;
    delete a;
    return 0;
}
