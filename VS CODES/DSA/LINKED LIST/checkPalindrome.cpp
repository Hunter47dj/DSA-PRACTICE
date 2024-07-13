#include<iostream>
#include<bits/stdc++.h>
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


 // approach 1 - store in array and check
bool palindromeLL(Node* head)
{
    vector<int> arr;

    Node* temp = head;
    while(temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    int n = arr.size();
    int s =0;
    int e = n-1;

    while(s <= e)
    {
        if(arr[s++] != arr[e--])
        {
            return false;
        }
    }
    return true;
    

}

// approach 2 - rotate second half and compare

Node* getmiddle(Node* head)
{
    Node* slow =head;
    Node* fast = head->next;
    while(fast != NULL && fast-> next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

    }
    return slow;
    
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

bool ispalindromeLL(Node* head)
{
    if(head == NULL || head->next == NULL)
        return true;
    
    
    Node* middle = getmiddle(head);
    Node* temp = middle->next;
    middle->next = reverse(temp);

    // commpare
    Node* head1 = head;
    Node* head2 = middle->next;
    while (head2 != NULL)
    {
        if(head1->data != head2->data)
        {
            return false;
        }
        
        head1 = head1->next;
        head2 = head2->next;
    }
    
    return true;
}

int main()
{ 
    Node* list1 = new Node(3);
    Node* head1 = list1;
    Node* tail1 = list1;


    insertAtTail(tail1,3);
    insertAtTail(tail1,4);
    insertAtTail(tail1,3);
    
    // cout<<palindromeLL(head1);
    cout<<ispalindromeLL(head1);

return 0;
}