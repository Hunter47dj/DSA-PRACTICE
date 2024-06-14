//{ Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    if(n)
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    else cout<< " ";
}


// } Driver Code Ends
/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution
{
    public:

    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
          unordered_map<int , int>mp;
        Node * start1=head1;
        while(start1!=NULL){
            mp[start1->data]++;
            start1=start1->next;
        }
        Node * start2 =head2;
        Node * dummy=new Node (-1);
        Node * ans =dummy;
        while(start2!=NULL){
            if(mp.find(start2->data)!=mp.end()){
                ans->next=new Node (start2->data);
                ans =ans->next;
                mp[start2->data]--;
                if(mp[start2->data]<=0){
                    mp.erase(start2->data);
                }
            }
            start2=start2->next;
        }
        return dummy->next;

    }
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>> n >> m;
	    
	    Node* head1 = inputList(n);
	    Node* head2 = inputList(m);
	    
	    Solution ob;
	    Node* result = ob.findIntersection(head1, head2);
	    
	    printList(result);
	    cout<< endl;
	}
	return 0;
}

// } Driver Code Ends