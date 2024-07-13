#include<iostream>
#include<vector>
using namespace std;

class queue
{
private:
    int* arr;
    int front;
    int back;
    int size;
public:
    queue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = 0;
        back = 0;
    }

// inserting the element in the queue.
    void push(int data)
    {
        if(back >= size)
        {
            cout<<"queue overflow";
            return;
        }
        arr[back] = data;
        back++;
    }

    void pop()
    {
        arr[front] =-1;
        front++;
    }

    void print()
    {
        for (int i = front; i < back; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }

    int frontElement()
    {
        return arr[front];
    }
    
    int backElement()
    {
        return arr[back-1];
    }

    bool empty()
    {
        if(back == 0)
        {
            return true;
        }
        else return false;
    }
};



int main()
{ 
    queue q(5);

    q.push(5);
    q.push(4);
    q.push(3);
    q.push(2);
    // q.push(2);   //uncomment to see queue is overflowed
    q.push(1);

    q.print();

    q.pop();
    q.print();

    cout<<q.frontElement()<<" ";
    cout<<q.backElement()<<" ";


return 0;
}