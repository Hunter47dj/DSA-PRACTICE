//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
};

void append(struct Node** headRef, int newData)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node *last = *headRef;
	new_node->data = newData;
	new_node->next = NULL;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

int sumOfLastN_Nodes(struct Node* head, int n);

// Driver program to test above
int main()
{
    int t;
    cin>>t;
    while(t--){
        struct Node* head = NULL;
        int n,m,tmp;
        cin>>m>>n;
        while(m--){
            cin>>tmp;
            append(&head, tmp);
        }
        cout<<sumOfLastN_Nodes(head, n)<<endl;
    }
	return 0;
}

// } Driver Code Ends


/*Structure of the node of the linled list is as

struct Node {
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
};
*/
// your task is to complete this function 
// function should return sum of last n nodes
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


int sumOfLastN_Nodes(struct Node* head, int n)
{
      // Code here
      int length = getCount(head);
      
      int cnt = 0;
      Node* temp = head;
      int sum = 0;
      
      while(temp != NULL)
      {
        if(cnt < length -n)
        {
            temp = temp->next;
            cnt++;
            continue;
        }
        
        sum = sum + temp->data;
        temp = temp->next;
        
      }
      
      return sum;
      
}