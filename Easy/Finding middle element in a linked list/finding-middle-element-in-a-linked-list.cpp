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
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getlength(Node* head)
    {
        Node* temp = head;
        int cnt =0;
        while(temp != NULL)
        {
            temp =temp->next;
            cnt++;
            
        }
        return cnt;
    }
    
    int getMiddle(Node *head)
    {
        // Your code here
        if(head == NULL)
        {
            return -1;
        }
        
        int len = getlength(head);
        
        int middle = len/2;  // same condition for both even and odd length
        
        
        int cnt = 0;
        Node* temp = head;
        while(temp != NULL && cnt < middle)
        {
            temp = temp->next;
            cnt++;
        }
        
        return temp->data;
    }
};


//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}

// } Driver Code Ends