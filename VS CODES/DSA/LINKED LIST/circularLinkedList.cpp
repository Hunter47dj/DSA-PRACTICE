#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        data =d;
        this->next  =NULL;
    }

    ~Node() {
        int value = this->data;
        if(this->next != NULL) {
            delete next;
            next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertAtPosition(Node* &tail, int element, int data)
{
    Node* temp = new Node(data);

    if(tail == NULL)
    {
        tail = temp;
        temp->next = temp;
        
    }
    else
    {
       
        Node* curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        temp->next = curr->next;
        curr->next = temp;    
        
    }
}

void printlist(Node* tail)
{
    Node* temp = tail;

    if (tail == NULL)
    {
        cout<<"list is empty"<<endl;
        return;
    }
    

    
    do
    {
        cout<<" "<<tail->data<<" ";
        tail = tail->next;
        
    } while (tail != temp);
}


void deleteElement(Node* &tail, int element)
{
    Node* prev = tail;
    Node* curr = prev->next;

    while (curr->data != element)
    {
        prev = curr;
        curr= curr->next;
    }

    
    prev->next = curr->next;

    // if only one element in the node is present
    if (curr == prev)
    {
        tail =  NULL;

    }
    
    // when deleting start or end elements
    else if (curr == tail)
    {
        tail = prev;
    }
    curr->next= NULL;
    delete curr;
}


int main()
{ 
    Node* tail = NULL;
    insertAtPosition(tail,5,3);   // element , data
    // insertAtPosition(tail,3,5);
    // insertAtPosition(tail,5,7);
    // insertAtPosition(tail,7,9);
    // insertAtPosition(tail,5,6);
    // insertAtPosition(tail,9,10);


    printlist(tail);

    cout<<endl;

    deleteElement(tail,3);
    printlist(tail);
return 0;
}