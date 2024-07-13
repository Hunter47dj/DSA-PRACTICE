#include <iostream>
using namespace std;

// template <typename T>

class Node
{

public:
    int data;
    Node *next;
    // Node() {} // default constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// template <typename T>

class stack
{

private:
    Node *head;
    Node *tail;

public:
    stack()
    {
        head = nullptr;
        tail = nullptr;
    }

    void push(int data)
    {
        Node *temp = new Node(data);
        if (head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }

    void pop()
    {
         if (head == nullptr) {
            cout << "Stack underflow" << endl;
            return;
        }

        if (head == tail) {
            delete head;
            head = nullptr;
            tail = nullptr;
        } else {
            Node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            delete tail;
            tail = temp;
            tail->next = nullptr;
        }
    }

    void empty()
    {
        if (head == nullptr)
        {
            cout << "empty" << endl;
        }
        else
        {
            cout << "not empty" << endl;
        }
    }

    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    stack st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    st.print();

    st.pop();

    st.print();
    return 0;
}