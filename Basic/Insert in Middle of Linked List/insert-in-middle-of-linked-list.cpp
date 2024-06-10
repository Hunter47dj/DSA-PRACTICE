//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int data;
    struct Node *next;
    
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// function to display the linked list
void display(Node* head)
{
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout<<endl;
}

Node* insertInMiddle(Node* head, int x);

int main()
{
    int T, n, x;
    cin>>T;
    while(T--)
    {
        cin>> n >> x;
        
        struct Node *head = new Node(x);
        struct Node *tail = head;
        
        for (int i=0; i<n-1; i++)
        {
            cin>>x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        
        cin>> x;
        head = insertInMiddle(head, x);
        display(head);
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to insert a node in the middle of the linked list.
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

Node* insertInMiddle(Node* head, int x)
{
	// Code here
	int len = getlength(head);
	
	int middle = len/2;
	if(len%2 == 0)
	{
	    middle--;
	}
	
	Node* curr = head;
	
	int cnt =0;
	
	while(curr != NULL && cnt < middle)
	{
	  
	    curr= curr->next;
	    cnt++;
	    
	}
	Node* nodetoinsert = new Node(x);
	nodetoinsert->next = curr->next;
	curr->next = nodetoinsert;
	return head;
}