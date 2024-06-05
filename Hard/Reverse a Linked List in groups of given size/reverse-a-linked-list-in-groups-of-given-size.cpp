//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    struct node* next;
    
    node(int x){
        data = x;
        next = NULL;
    }
    
};

/* Function to print linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}


// } Driver Code Ends
/*
  Reverse a linked list
  The input list will have at least one element  
  Return the node which points to the head of the new LinkedList
  Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;
*/

class Solution
{
    public:
    int getlength(node* head)
    {
        node* temp = head;
        int cnt= 0;
        while (temp!= NULL)
        {
            temp = temp->next;
            cnt++;
        }
        return cnt;    
    }


    struct node *reverseIt (struct node *head, int k)
    { 
        // Complete this method
        if(head == NULL)
    {
        return head;
    }

    int sizeOfLL = getlength(head);

    if (sizeOfLL < k)
    {
        k = sizeOfLL;  // reversing the remaining elements at end by treating them as one group

    }
    
    // step1- reverse the  k nodes
    node* prev = NULL;
    node* curr = head;
    node* next = NULL;

    int cnt =0;
    while (curr != NULL && cnt <k)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;

        cnt++;
    }
    
    //step2- recurssion se head le aao
    if(next!= NULL)
    {

    head->next = reverseIt(next,k);
    }

    // return the head of the reversed node i.e. prev.

    return prev;
        
    }
};


//{ Driver Code Starts.

/* Drier program to test above function*/
int main(void)
{
    int t;
    cin>>t;
     
    while(t--)
    {
        struct node* head = NULL;
        struct node* temp = NULL;
        int n;
        cin >> n;
         
        for(int i=0 ; i<n ; i++)
        {
            int value;
            cin >> value;
            if(i == 0)
            {
                head = new node(value);
                temp = head;
            }
            else
            {
                temp->next = new node(value);
                temp = temp->next;
            }
        }
        
        int k;
        cin>>k;
        
        Solution ob;
        head = ob.reverseIt(head, k);
        printList(head);
    }
     
    return(0);
}


// } Driver Code Ends