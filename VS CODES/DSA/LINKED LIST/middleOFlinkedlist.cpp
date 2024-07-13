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

int LengthofLL(Node* head)
{
    Node* temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
    
}

Node* middleoflinkedlist(Node* head)
{
    Node* temp = head;
    int length = LengthofLL(head);
    int midPosition=0;

    midPosition = length/2 + 1;

    int cnt=0;
    while (cnt < midPosition-1)
    {
        temp = temp->next;
        cnt++;
    }
    
    return temp;
}


Node* middleNodeofLL(Node* head)
{
    Node* temp1  = head;
    Node* temp2  = head->next;

    while(temp2 != NULL)
    {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
    }

    return temp1;
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
    Node* node1 = new Node(5);
    Node* head =  node1;
     
     insertAtHead(head,4);
     insertAtHead(head,6);
     insertAtHead(head,3);
     insertAtHead(head,2);
     insertAtHead(head,1);
     insertAtHead(head,8);
    //  insertAtHead(head,0);

    printlist(head);
    cout<<endl<<"length "<<LengthofLL(head)<<endl;
     Node* middle = middleNodeofLL(head);
     cout<<"middle : "<<middle->data<<"\nmiddle next : "<<middle->next;
 
    cout<<"\n check the difference \n";
    

     Node* middle2 = middleoflinkedlist(head);
     cout<<"middle : "<<middle2->data<<"\nmiddle next : "<<middle2->next;
return 0;
}