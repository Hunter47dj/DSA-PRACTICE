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

int getlength(Node* head)
{
    Node* temp = head;
    int cnt= 0;
    while (temp!= NULL)
    {
        temp = temp->next;
        cnt++;
    }
    return cnt;    
}

// this code works at gfg and at others too
Node* kReverse(Node* &head, int k)
{
    if(head == NULL)
    {
        return head;
    }

    int sizeOfLL = getlength(head);

    if (sizeOfLL < k)
    {
        k = sizeOfLL;  // reversing the remaining elements at end by treating them as one group

    }
    
    // step1- reverse the  k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;

    int cnt =0;
    while (curr != NULL && cnt <k)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;

        cnt++;
    }
    
    //step2- recurssion se head le aao
    if(next!= NULL)
    {

    head->next = kReverse(next,k);
    }

    // return the head of the reversed node i.e. prev.

    return prev;

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

void insertAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);

    temp->next  = head;
    head = temp;
}


int main()
{ 
    Node* node1 = new Node(10);
    Node* head = node1;
    insertAtHead(head, 6);
    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtHead(head, 0);

    printlist(head); cout<<endl;

    head = kReverse(head, 3);
    printlist(head); cout<<endl;
return 0;
}