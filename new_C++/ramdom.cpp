#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

class node {
    public:
        int data;
        node* left;
        node* right;

        node (int d ){
            this->data=d;
            this->left = NULL;
            this ->right = NULL;
        }
};
node* insert(node* & root,int d){
    if (root== NULL)
    {
        root = new node(d);
        return root;

    }
    if (d>root->data)
    {
        root ->right = insert(root->right,d);
    }
    if (d<root->data)
    {
        root ->left = insert(root->left,d);
    }
    return root;
}
void take(node* &root)
{
    int data;
    cin>>data;
    while (data != -1)
    {
        root = insert(root,data);   
        cin >>data;
    }
}

int main ()
{
    node* root = NULL;
    cout<<"enter data";
    take(root);



return 0;
}