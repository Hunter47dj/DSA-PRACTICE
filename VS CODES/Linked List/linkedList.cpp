#include<iostream>
using namespace std;

// creating class for node creation of link list

class node 
{
    public:
    int data;  // data of node 
    node *next; // pointer of node which stores next node address

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};


// inserting the node in linked list

void insertAtHead(node * &head, int data)  // don't want to create a copy so using &
{
    // creating temporary node
    node *temp = new node(data);

    temp->next = head;
    head= temp; 
}


// inserting at the middle of the LL

void insertAtMiddle(node * &head, node * &tail, int data)
{
    node * temp = new node(data);
    head->next=temp;
    temp->next=tail;

}

// inserting the node at tail of LL

void insertAtTail(node* &tail, int data)
{
    node *temp =new node(data);

    tail->next =temp;   // to change the pointer to end 
    tail =temp;      // to move tail to this node
}


// creating a print function for linked list
void print(node * head)
{
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;
}

int main()
{ 
    // creating a node 
    node * node1 = new node(10);

    // creating head for a node 
    node *head = node1;
    // creating the tail
    node * tail = node1;
    //printing LL
    // print(head);

    // inserting the new node in the linked list 
    // insertAtHead(head,20);
    // print(head);
    

    insertAtTail(tail,30);
    // insertAtTail(tail,90);
    
    // int position =3;  // inserting node at 3rd position of LL
    insertAtMiddle(head,tail,50); // 20 10 _ 30 90
    print(head);

    

return 0;
}