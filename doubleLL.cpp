#include<iostream>
#include<bits/stdc++.h>
using namespace  std;

//easy

class node{
    public:

    int data;
    node* prev;
    node* next;

    node(){
        this->data=0;
        this->next=NULL;
        this->prev=NULL;
    }
     node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void printL(node* head){
    node* temp = head;
    while(temp->next!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}


int getL(node* head){
    node* temp = head;
    int count = 0;

    while(temp->next!= NULL)
    {
        temp = temp->next;
        count ++;
    }
    return count;
}


void insertH(node* &head,node* &tail,int data){

    if(head == NULL){

        node* newnode = new node(data);
        newnode ->next = NULL;
        newnode->prev = NULL;
        head = tail = newnode;
    }

    else{
        node* newnode = new node(data);
        newnode->next = head;
        head->prev = newnode;
        head = newnode;


    }
}


int main ()
{
    // node* first = new node(10);
    // node* firs = new node(20);
    // node* fir = new node(30);
    node* head;
    node* tail;

    insertH(head,tail,5);
    insertH(head,tail,6);
    insertH(head,tail,7);
    insertH(head,tail,8);
    insertH(head,tail,9);
    insertH(head,tail,24);
    insertH(head,tail,51);

    int a = getL(head);
    cout<<a<<endl;


    printL(head);


    
return 0;
}