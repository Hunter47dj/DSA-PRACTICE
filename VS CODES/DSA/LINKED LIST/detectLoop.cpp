#include<iostream>
#include<map>
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

void insertAtTail(Node* &tail, int data)
{
    Node* temp = new Node(data);

    tail->next = temp;
    tail = temp;
}

bool detectLoop(Node* head)
{
    // your code here
    if(head == NULL)
    {
        return false;
    }
    
    map<Node*, bool> visited;
    
    Node* temp = head;
    
    while(temp != NULL)
    {
        if(visited[temp] == true) 
            {
                return true;
            }
        visited[temp] = true;
        temp = temp->next;
    }
    
    return false;
    
}

Node* floydsDetection(Node* head)
{
    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }

        slow = slow->next;

        if (slow == fast)
        {   
            // cout<<"\n loop present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;
}

Node* StartOfLoop(Node* head)
{
    if(head == NULL)
        return NULL;

    Node* fast = floydsDetection(head);
    if (fast == NULL)
    {
        return NULL;
    }
    
    Node* slow = head;

    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    
    return fast;

}

void RemoveLoop(Node* head)
{
    Node* loopstart = StartOfLoop(head);

    Node* temp = loopstart;
    while (temp->next != loopstart)
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

    tail->next = temp;

    // printlist(head);
    // cout<<" loop :" << detectLoop(head);
    cout<<" loop :" << floydsDetection(head)->data<<endl;
    
    cout<<StartOfLoop(head)->data <<endl;
    RemoveLoop(head);
    cout<<" loop :" << floydsDetection(head)->data<<endl;
return 0;
}