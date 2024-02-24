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

    //printing LL
    print(head);

    // inserting the new node in the linked list 
    insertAtHead(head,20);
    print(head);

    

return 0;
}