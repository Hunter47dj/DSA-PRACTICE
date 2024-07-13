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

// approach 1 : -- count the number of 0s 1s and 2s and then replace
void sort012(Node* head)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    Node* temp = head;
    while (temp!= NULL)
    {
        

        if (temp->data == 0)
        {
            count0++;
        }
        if (temp->data == 1)
        {
            count1++;
        }
        if (temp->data == 2)
        {
            count2++;
        }

        temp = temp->next;
        
    }

    temp = head;

    while (temp != NULL && count0 >0)
    {
        temp->data = 0;
        temp = temp->next;
        count0--;
    }
    while (temp != NULL && count1 >0)
    {
        temp->data = 1;
        temp = temp->next;
        count1--;
    }
    while (temp != NULL && count2 >0)
    {
        temp->data = 2;
        temp = temp->next;
        count2--;
    }
    
    
}


// approach 2 : -- create three LL for 0 1 and 2 and then merge them 

Node* mergesort0123(Node* head)
{
    Node* head0 = new Node(-1);
    Node* tail0 = head0;
    Node* head1 = new Node(-1);
    Node* tail1 = head1;
    Node* head2 = new Node(-1);
    Node* tail2 = head2;

    Node* temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            insertAtTail(tail0,temp->data);
        }
        else if (temp->data == 1)
        {
            insertAtTail(tail1,temp->data);
        }
        if (temp->data == 2)
        {
            insertAtTail(tail2,temp->data);
        }
        
        temp = temp->next;
    }

    if(head1->next != NULL)  // if 1s list is not empty
    {
        tail0->next = head1->next;
    }
    else 
    {       // 1s list is empty
        tail0->next = head2->next;
        tail2->next = NULL;
    }
   
   tail1->next = head2->next;
   tail2->next = NULL;
    
    // setup head
    head = head0->next;

    // delete dummy nodes
    delete head0;
    delete head1;
    delete head2;

    return head;
    
}

int main()
{ 
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,2);
    insertAtTail(tail,0);
    insertAtTail(tail,1);
    insertAtTail(tail,2);
    insertAtTail(tail,0);

    printlist(head);
    cout<<endl;

    // sort012(head);
    head = mergesort0123(head);

    printlist(head);
return 0;
}