#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printlist(Node* head)
{
    Node* temp = head;
    while (temp!= NULL)
    {
        
        cout<<temp->data<<" ";
        cout<<temp->next<<"    ";
        temp = temp->next;
    }
    cout<<endl;
}

void inserAtPosition(Node* &tail, int position, int data)
{
    Node* temp =new Node(data);
    if(position ==1)
    {
        
    }
}


int main()
{ 
    Node* node1 = new Node(5);
    Node* tail = node1;
   




return 0;
}