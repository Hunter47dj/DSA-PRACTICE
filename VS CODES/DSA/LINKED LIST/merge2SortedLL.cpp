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

void solve(Node* first, Node* second)
{
    Node* curr1 = first;
    Node* next1 = curr1->next;
    Node* curr2 = second;
    Node* next2 = curr2->next;

    while (curr1 != NULL)
    {
        if (curr1 <= curr2 && curr2 <= next1)
        {
            curr2->next = next1;
            curr1->next = curr2;

            curr2 = curr2->next;
            curr1 = curr1->next;
        }
        else {
            curr1 = curr1->next;
        }
        
    }
    
}

Node* mergeTwoSortedLL(Node* head1, Node* head2)
{
    if (head1 == NULL)
    {
        return head2;
    }
    if (head2 == NULL)
    {
        return head1;
    }

    if(head1->data > head2->data)
        solve(head2,head1);
    else 
        solve(head1,head2);
    
    
}


int main()
{ 
    Node* list1 = new Node(1);
    Node* head1 = list1;
    Node* tail1 = list1;

    Node* list2 = new Node(2);
    Node* head2 = list2;
    Node* tail2 = list2;


    insertAtTail(tail1,3);
    insertAtTail(tail1,5);
    insertAtTail(tail1,7);
    insertAtTail(tail1,9);

    insertAtTail(tail2,4);
    insertAtTail(tail2,6);
    insertAtTail(tail2,8);
    insertAtTail(tail2,10);

    printlist(head1);
    cout<<endl;
    printlist(head2);

    Node* head= NULL;
    head = mergeTwoSortedLL(head1,head2);
    cout<<endl;

    printlist(head);

return 0;
}