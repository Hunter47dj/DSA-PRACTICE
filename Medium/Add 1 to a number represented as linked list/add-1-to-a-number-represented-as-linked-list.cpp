//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    
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
    
    void insertAtTail(Node* &tail, int data)
    {
        Node* temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }
    
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* temp = reverse(head);
        
        Node* ans = new Node(-1);
        Node* anshead = ans;
        Node* anstail = ans;
        
        int carry =0;
        temp->data += 1;
        while(temp!=0)
        {
            temp->data = temp->data + carry;
            
            if(temp->data == 10)
            {
                insertAtTail(anstail, 0);
                carry =1;
            }
            else {
                carry =0;
                insertAtTail(anstail, temp->data);
            }
            
            
            temp = temp->next;
        }
        
        if(carry)
        {
            insertAtTail(anstail, 1);
        }
        
        anshead = anshead->next;
        anshead = reverse(anshead);
        // printlist(anshead);
        return anshead;
        
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends