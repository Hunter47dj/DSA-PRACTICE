#include<iostream>
#include<queue>
using namespace std;

int main()
{ 
    queue<int> q;
    q.push(5);
    q.push(4);
    q.push(3);

    cout<<"front "<<q.front()<<endl;
    q.pop();
    cout<<"front "<<q.front()<<endl;
    cout<<"back "<<q.back()<<endl;
return 0;
}