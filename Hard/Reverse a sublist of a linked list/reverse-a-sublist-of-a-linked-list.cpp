//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};


// } Driver Code Ends
//User function Template for C++

/*Link list node 
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    // void insertAtTail(Node* &tail, int data)
    // {
    //     Node* temp = new Node(data);
    //     tail->next = temp;
    //     temp->next = NULL;
    //     tail = temp;
    // }
    
    // void reverse(Node* head)
    // {
    //     Node* prev
    // }
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        if (head == NULL) return NULL;
        if (m == n) return head;

        Node* dummy = new Node(0);  // Create a dummy node to simplify edge cases
        dummy->next = head;
        Node* prev = dummy;
        
        // Move prev to the node just before the reversal section
        for (int i = 1; i < m; ++i) {
            prev = prev->next;
        }

        // Start reversing the sublist
        Node* start = prev->next;
        Node* then = start->next;
        
        // Perform the standard reverse linked list operations
        for (int i = 0; i < n - m; ++i) {
            start->next = then->next;
            then->next = prev->next;
            prev->next = then;
            then = start->next;
        }
        
        return dummy->next;
    }
};

//{ Driver Code Starts.

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}



// Driver program to test above functions
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

		

        Solution ob;

		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);

		cout << "\n";



	}
	return 0;
}

// } Driver Code Ends