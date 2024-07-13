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

void insertAtTail(Node* &head,Node* &tail, int data)
{

    Node* temp = new Node(data);
    if (tail == NULL)
    {
        tail = temp;
        head = temp;
        return;
    }
    
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

Node* reverse(Node* head)
{
    Node* prev = NULL;
    Node* frwd = NULL;
    Node* curr = head;

    while (curr != NULL)
    {
        frwd = curr->next;
        curr->next = prev;

        prev = curr;
        curr = frwd;
    }
    
    return prev;
}


Node* addnode(Node* &first, Node* &second)
{
    Node* anshead = NULL;   // creating list for ans
    Node* anstail = NULL;
    int carry = 0;         // initially carry is zero

    while (first != NULL || second != NULL || carry !=0)
    {
        int val1= 0;
        if (first != NULL)
        {
            val1 = first->data;
        }

        int val2= 0;
        if (second != NULL)
        {
            val2= second->data;
        }
        
        int sum = carry + val1 + val2;   
        carry = sum/10;
        int digit = sum%10;
        
        insertAtTail(anshead, anstail, digit);

        if (first != NULL)
        {
            first = first->next;  
        }
        if (second != NULL)
        {
            second = second->next;  
        }
    }
    // anshead =  reverse(anshead);
    // cout<<endl;
    // printlist(anshead);
    return anshead;
    
}


Node*  add2numbersLL(Node* &first, Node* &second)
{
    // step 1 - reverse
   first =reverse(first);
   second =reverse(second);

//    step 2- add 
    Node* add = addnode(first,second);

    // step 3 - reverse the final LL
    Node* head = reverse(add);

    return head;
}

int main()
{ 
    Node* list1 = new Node(3);
    Node* head1 = list1;
    Node* tail1 = list1;

    Node* list2 = new Node(4);
    Node* head2 = list2;
    Node* tail2 = list2;


    // insertAtTail(tail1,3);
    insertAtTail(head1,tail1,4);
    insertAtTail(head1,tail1,5);
    // insertAtTail(tail1,9);

    // insertAtTail(tail2,4);
    insertAtTail(head2,tail2,5);
    // insertAtTail(tail2,8);
    // insertAtTail(tail2,10);

    // printlist(head1);
    // cout<<endl;
    // printlist(head2);

    // cout<<endl;
    Node* ans = add2numbersLL(head1,head2);
    printlist(ans);

return 0;
}