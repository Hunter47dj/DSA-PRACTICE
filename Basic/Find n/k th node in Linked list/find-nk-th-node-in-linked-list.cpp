//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int fractional_node(struct Node* head,int k);

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Node* ptr,*start = NULL,*ptr1;
        int n,i;
        cin>>n;
        
        for(i=0;i<n;i++)
        {
            int value;
            cin>>value;
            
            ptr=new Node(value);
            
            if(start==NULL)
            {
                start=ptr;
                ptr1=ptr;
            }
            else
            {
                ptr1->next=ptr;
                ptr1=ptr1->next;
            }
        }
        ptr1->next=NULL;
        int k;
        cin>>k;
        int p = fractional_node(start,k);
        cout<<p<<endl;
    }
}

// } Driver Code Ends


/*The structure of the node is
struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
int getCount(struct Node* head){
    
    
        //Code here
        int cnt=0;
        Node* temp = head;
        while(temp!= NULL)
        {
            temp = temp->next;
            cnt++;
        }
        
        return cnt;
    }
    
    
int fractional_node(struct Node *head, int k)
{
    // your code here
    int N = getCount(head);
    
    int nk =0 ;
    if(N%k == 0)
        nk =  N/k;
    else nk =  N/k +1;
    
    Node* temp = head;
    int cnt=1;
    
    
    while(cnt< nk){
        temp = temp->next;
        cnt++;
    }
    return temp->data;
}
