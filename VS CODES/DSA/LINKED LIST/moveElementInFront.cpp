#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &tail, int data)
{
    Node* temp = new Node(data);

    tail->next = temp;
    tail = temp;
}

void printlist(Node* &head)
{
    Node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        // cout<<temp->next<<"    ";
        temp = temp->next;
    }
    
}


Node* moveInFront(Node* &head)
{
    Node* prev= NULL;
    Node* curr = head;

    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }

    curr->next = head;
    prev->next = NULL;
    head = curr;
    
    return head;
}

int main()
{ 
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    insertAtTail(tail,70);

    printlist(head);
    cout<<endl;
    
    head = moveInFront(head);
    printlist(head);
return 0;
}