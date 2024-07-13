#include<iostream>
using namespace std;

class Node
{
    public: 
    int data;
    Node * next;

    Node(int d)
    {
        data = d;
        this->next = NULL;
    }
  
    ~Node() 
    {
        int value = this->data;

        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout<<endl<<"value freed is "<<value<<endl;
    }
};

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

void insertAtHead(Node* &head,int d)
{
    Node* temp = new Node(d);

    temp->next  = head;
    head = temp;
}

void insertAtTail(Node* &tail, int data)
{
    Node* temp = new Node(data);

    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int d, int position)
{
    if (position==1)
    {
        insertAtHead(head,d);
        return;
    }

    int cnt = 1;
    Node * temp = head;
    while (cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }

    if ( temp->next == NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    
    Node* nodetoinsert = new Node(d);

    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    
}


void DeleteAtPosition(Node* &head, int position)
{
    Node * temp = head;
    if (position==1)
    {   
        Node* temp = head;
        head = head->next;

        //freeing the memory
        temp->next = NULL;
        delete temp;
        
    }
    else 
    {
        Node* prev =NULL;
        Node* curr = head;

        int cnt = 1 ;
        while (cnt <position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;

        // freeing the memmory 
        curr->next = NULL;
        delete curr;
        
    }

    
}



int main()
{ 
    Node * node1 = new Node(5);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);

    insertAtTail(tail,6);
    insertAtTail(tail,7);
    insertAtTail(tail,8);
    insertAtTail(tail,9);

    insertAtPosition(head,tail,22, 5);
    printlist(head);
    cout<<endl;
    DeleteAtPosition(head, 1);
    printlist(head);
    cout<<endl;
    cout<<"head "<<head->data<< " ";
    cout<<"tail "<<tail->data<< " ";
return 0;
}