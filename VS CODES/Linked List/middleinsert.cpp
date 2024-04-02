#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// creating a print function for linked list
void print(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(node *&head, int data) // don't want to create a copy so using &
{
    // creating temporary node
    node *temp = new node(data);

    temp->next = head;
    head = temp;
}

void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);

    tail->next = temp; // to change the pointer to end
    tail = temp;       // to move tail to this node
}

// inserting at a position
void insertAtPosition(node *&tail, node *&head, int position, int data)
{

    // insert in the strting of rhe LL
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }


// inserting at middle or end

    int count = 1; // starting position
    node *temp = head;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // inserting at the end of the the linked list

    if (temp->next == NULL) // hence at end
    {
        insertAtTail(tail, data);
        return;
    }

    node *nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

int main()
{
    node *node1 = new node(10);

    node *head = node1;
    node *tail = node1;

    insertAtHead(head, 20);
    insertAtHead(head, 40);
    insertAtHead(head, 50);

    print(head);

    // inserting at starting
    insertAtPosition(tail, head, 1, 96);
    print(head);

    insertAtPosition(tail, head, 6, 69);
    print(head);

    cout << head->data << endl;
    cout << tail->data << endl;

    return 0;
}