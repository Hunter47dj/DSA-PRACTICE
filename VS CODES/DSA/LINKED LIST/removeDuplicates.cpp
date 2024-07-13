#include<iostream>
#include<unordered_map>
#include<map>
#include<list>
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



void removeDupicateNode(Node* &head)
{
    // sorted LL
    if(head == NULL)
    {
        return ;
    }

    Node* curr = head;

    while (curr != NULL)
    {
        if ( (curr->next != NULL) && curr->data == curr->next->data)  // order is important
        {
            Node* next_next = curr->next->next;
            Node* nodetodelete = curr->next;
            delete(nodetodelete);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
        
    }
}

// void removeDuplicateInUnsortedLL(Node* head)
// {
//     if(head== NULL)
//     {
//         return;
//     }

//     map<Node*,bool> visited;

//     Node* curr = head;
//     Node* prev = NULL;
   
//     while (curr != NULL)
//     {
//         if(visited[curr->next] == true)
//         {
//             prev->next = curr->next;
//             delete curr;
//             curr->next = NULL;
//         }
//     }
    
    
// }


Node * removeDuplicates( Node* &head) 
    {
     // your code goes here
     Node* curr = head;
    //  Node* frwd = curr->next;
     Node* prev= NULL;
     
     map<int, bool> visited ;
        
     while(curr != NULL)
     {
         if(visited[curr->data] == false)
         {
             visited[curr->data] = true;
             prev= curr;
             curr = curr->next;
         }
         else 
         {
             prev->next = curr->next;
             curr = curr->next;
             
         }
     }
    cout<<endl;
    for(auto  i : visited)
    {
        cout<<i.first<<" "<<i.second<<"   ";
    }
    cout<<endl;

     return head;
    }

int main()
{ 
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,30);
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    
    insertAtTail(tail,50);
    insertAtTail(tail,40);
    insertAtTail(tail,60);
    insertAtTail(tail,50);
    insertAtTail(tail,60);
    insertAtTail(tail,70);

    printlist(head);
    cout<<endl;
    
    
    // removeDupicateNode(head);
        removeDuplicates(head);
    printlist(head);
    cout<<endl;
return 0;
}