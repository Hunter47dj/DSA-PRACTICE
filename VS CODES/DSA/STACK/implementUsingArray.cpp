#include <iostream>
using namespace std;
template <typename T>
class stack
{
private:
    T *arr;
    int top;
    int size;

public:
    // constructor
    stack(int size)
    {
        this->size = size;
        arr = new T[size];
        top = -1;
    }

    // push element into the stack
    void push(T data)
    {
        if (top < size)
        {
            top++;
            arr[top] = data;
        }

        else
        {
            cout << "stack overflow" << endl;
        }
    }
    // remove element from the stack
    void pop()
    {
        if (top != -1)
        {
            top--;
        }
        else{
            cout << "stack underflow : empty stack" << endl;
        }
    }

    // get the top element of the stack
    int topp()
    {
        if (top != -1)
        {
            return arr[top];
        }
        else
        {
            return -1;
        }
    }

// print the stack
    void print()
    {
        for(int i = 0; i<= top; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

};

int main()
{
    stack<int> num(5);

    num.push(5);
    num.push(4);
    num.push(3);
    num.push(2);
    num.push(1);

    num.print();  // will print in same order

    num.pop();
    num.print();  // will print in same order
    cout<<num.topp();
    if (num.empty())
    {
        cout<<" empty";
    }
    else {
        cout<<" not empty";
    }
    

    return 0;
}