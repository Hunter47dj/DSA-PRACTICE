//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        delete temp;
    }
}


// } Driver Code Ends
/* Following is the Linked list node structure */

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

class Solution {
  public:
    int length(Node *head){
        int cnt = 0;
        Node *temp = head;
        while(temp!=NULL){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    
    Node *reverseList(Node *head){
        Node *temp = head;
        Node *prev = NULL;
        while(temp != NULL){
            Node *next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }
    
    void reorderList(Node* head) {
        // Your code here
        
        // Basically the question is after the middle element 
        // reverse the elements after middle element
        //.and put them consecutively in the first half of the linked list
        
        
        if(head == NULL || head->next == NULL)
        return ;
        
        Node *temp1 = head;
        Node *mid = head;
        int len = length(head);
        int pos = (len/2) + 1;
        
        for(int i=0;i<pos-1;i++)
        mid = mid->next;
        
        Node *temp2 = reverseList(mid->next);
        
        while(temp2!=NULL && temp1 !=mid){
            Node *next_temp1 = temp1->next;
            Node *next_temp2 = temp2->next;
            
            temp1->next = temp2;
            temp2->next = next_temp1;
            
            temp1 = next_temp1;
            temp2 = next_temp2;
        }
        mid->next = NULL;
        
        
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main() {
    int t, k;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t

    while (t--) {
        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        Node *head = nullptr, *tail = nullptr;
        int x;

        if (ss >> x) {
            head = new Node(x);
            tail = head;

            while (ss >> x) {
                tail->next = new Node(x);
                tail = tail->next;
            }

            // Link the last node to the head if k is 1 to make it circular
            if (k == 1) {
                tail->next = head;
            }
        }

        Solution ob;
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends