#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


Node* reverseLinkedList(Node* &head)
{
    Node* prev = NULL;
    Node* curr = head;
    Node* frwd = NULL;

    while (curr != NULL)
    {
        frwd = curr->next;
        curr->next = prev;

        prev = curr;
        curr = frwd;
    }
    
    return prev;
    
}

void insertAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);

    temp->next  = head;
    head = temp;
}

void printlist(Node* &head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        cout<<temp->next<<"    ";
        temp = temp->next;
    }
    
}

int main()
{ 
    Node* node1 = new Node(10);
    Node* head = node1;
    insertAtHead(head,9);
    insertAtHead(head,8);
    insertAtHead(head,7);
    insertAtHead(head,6);
    insertAtHead(head,5);
    insertAtHead(head,4);

    printlist(head);

    cout<<endl;

   head =  reverseLinkedList(head);
    printlist(head);
return 0;
}