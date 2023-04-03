#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

struct node 
{
    public:
        int data;
        node* left;
        node*right;

    
    node(int v)
    {
        this->data = v;
        this->left=this->right= NULL;
    }

};
node* build(node* root)
{
    int data;
    cout<<"enter the data"<<endl;
    cin>> data;
    root = new node (data);

    if (data==-1)
    return NULL;

    cout<<"enter for left"<<" of "<<data<<endl;
    root->left = build(root->left);
    cout<<"enter for right"<<" of "<<data<<endl;
    root->right = build(root->right);
    return root; 


}
void ino(node* root)
{
    if (root == NULL)
    return;

    ino( root->left);
    cout<<root->data<<endl;
    ino( root->right);
}

int main ()
{
    node* root = NULL;
    root = build(root);

    cout<<endl;
    cout<< "INorder"<<endl;
    ino(root);



return 0;
}