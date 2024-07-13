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


Node* floydsDetection(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while (slow!= NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if(slow == fast)
            return slow;
        
    }

    return NULL;    
}

Node* startingOfLoop(Node* head)
{
    Node* slow = head;
    Node* fast = floydsDetection(head);
    if(fast == NULL)
    {
        return NULL;
    }

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
    
}

void removeLoop(Node* head)
{
    if(head == NULL)
    {
        return;
    }

    Node* LoopStart = startingOfLoop(head);
    if (LoopStart == NULL)
    {
        cout<<"no loop";
        return;
    }
    
    Node* temp = LoopStart;

    while (temp->next != LoopStart)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{ 
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    Node* temp = tail;
    insertAtTail(tail,40);
    insertAtTail(tail,50);
    insertAtTail(tail,60);

    printlist(head);
    // tail->next = temp;
    // printlist(head);
    cout<<endl;
    
    cout<<"slow==fast node :"<<floydsDetection(head)<<endl;
    cout<<"starting of loop :"<<startingOfLoop(head)<<endl;
    removeLoop(head);
    cout<<"slow==fast node :"<<floydsDetection(head)<<endl;
return 0;
}