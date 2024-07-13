#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void printlist(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {

        cout << temp->prev << " ";
        cout << temp->data << " ";
        cout << temp->next << "      ";

        temp = temp->next;
    }
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);

    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);

    if (tail == NULL)
    {
        tail = temp;
        head = temp;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(head, tail, data);
        return;
    }

    Node *nodetoinsert = new Node(data);

    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}


void DeleteAtPosition(Node* &head, int position)
{
    if (position==1)
    {
        Node* temp = head;
        head->next->prev= NULL;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        int cnt =1;
        Node* prev = NULL;
        Node* curr = head;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;    
    }
    
}


int main()
{
    // node *node1 = new node(4);
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 3);
    insertAtHead(head, tail, 2);
    insertAtHead(head, tail, 1);


    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 6);
    // insertAtTail(head, tail, 7);
    // printlist(head);

    insertAtPosition(head, tail, 33, 6);
    printlist(head);

cout<<endl;
    DeleteAtPosition(head,6);
    printlist(head);
    cout<<endl<<"head "<<head->data;

    return 0;
}

