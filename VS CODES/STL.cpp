
#include<iostream>
#include<bits/stdc++.h>
#include<array>
#include<vector>
#include<deque>
#include<list>
using namespace std;


int main()
{ 

// ARRAYS------------------------------------------------------------

//     int arr[4]={1,2,3,4};     // simple array
//     array<int,4> A  = {1,2,3,4};     //stl array

//     int size= A.size();  // gives size of array
  
//     cout<<endl<<"simple array : ";
//     for (int i = 0; i < 4; i++)
//     {
//         cout<<arr[i];              // prints normal array
//     }
//    cout<<endl<<"STL array : ";
//     for(auto i : A)
//     {
//         cout<<i;               // prints stl array
//     }

//     cout<<endl<<"element at 2nd Index "<<A.at(2)<<endl;; 
//     cout<<"empty or not "<<A.empty()<<endl;
//     cout<<"first elment "<<A.front()<<endl;
//     cout<<"last elment "<<A.back()<<endl;


    
// VECTOR --------------------------------------------------------------------

//     vector<int> v;  // it has dynamic size;
//    vector<int> aa(5,1);  // 5 is size and all are initialized by 1;

//    vector<int> last(aa);  // this will copy all elements of aa in last;

//     cout<<"vector : ";
//     for(auto i: aa)
//     {
//         cout<<i;  // it will be same for all i.e array vector except stack. .
//     }
//  cout<<endl;

//     cout<<"size "<<v.size()<<endl;    
//     cout<<"capacity "<<v.capacity()<<endl;    

//     v.push_back(2);  // inserting element in the vector.
//     cout<<"size "<<v.size()<<endl;    
//     cout<<"capacity "<<v.capacity()<<endl;    

//     v.push_back(3);
//     cout<<"size "<<v.size()<<endl;    
//     cout<<"capacity "<<v.capacity()<<endl;    

//     v.push_back(5);
//     cout<<"size "<<v.size()<<endl;    
//     cout<<"capacity "<<v.capacity()<<endl;     // capacity of a vector doubles 

// cout<<"vector : ";
//     for(auto i: v)
//     {
//         cout<<i;  // it will be same for all i.e array vector except stack. .
//     }
//  cout<<endl;

//     cout<<endl<<"element at 2nd Index "<<v.at(2)<<endl;; 
//     cout<<"empty or not "<<v.empty()<<endl;
//     cout<<"first elment "<<v.front()<<endl;
//     cout<<"last elment "<<v.back()<<endl;

//     v.pop_back();  // it removes the last entered element
//     cout<<"size after removing "<<v.size()<<endl;    
//     cout<<"capacity after removing "<<v.capacity()<<endl;  // it willnot change 

//     cout<<"vector after removing: ";
//     for(auto i: v)
//     {
//         cout<<i;  // it will be same for all i.e array vector except stack. .
//     }
//  cout<<endl;
    
//     v.clear(); // it will remove all elements in vector 
//                 // size =0 capicity still same bqz memory was allocated .
//     cout<<"size after clearing "<<v.size()<<endl;    
//     cout<<"capacity after clearing "<<v.capacity()<<endl; 



// DEQUE - DOUBLY ENDED QUEUE --------------------------------------
 
// int this we can do insertion and deletion from both the ends of the queue 
// it is also dynamic 

    //     deque<int> d;

    //     d.push_back(2);  // adding elements at the back
    //     d.push_back(4);
    // cout<<"size "<<d.size()<<endl;    
    // // cout<<"capacity "<<d.capacity()<<endl;   don't have any concept of this 

    //     cout<<"deque : ";
    //     for(int i: d)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    //     d.push_front(3);   // adding elements in the back
    //     d.push_front(6);

    //     cout<<"deque : ";
    //     for(int i: d)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;

    //     // similarly we can pop elements from front and back also

    //     d.pop_back();
    //     d.pop_front();
    //     cout<<"deque after poping: ";
    //     for(int i: d)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;

    // d.push_front(6);   // now d = {6 3 2}
    // cout<<endl<<"element at 2nd Index "<<d.at(2)<<endl;; 
    // cout<<"empty or not "<<d.empty()<<endl;
    // cout<<"first elment "<<d.front()<<endl;
    // cout<<"last elment "<<d.back()<<endl;

    //  cout<<"deque before erasing: ";
    //     for(int i: d)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;

    //  d.erase(d.begin(), d.begin()+1); //this will delete the first element . 
    // cout<<"deque after erasing: ";
    //     for(int i: d)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    //  d.erase(d.begin(),d.end());  //this will delete the entire elements
    // cout<<" size after compelete deletion "<<d.size()<<endl;


// --------------LIST ------------------------------------------------------------------------------------------------------

//  we can not access the element of the list directly by using at(),
// for this we have to traverse the list upto that elemment .

       
    //     list<int> ll(5,100); // initiialize the 5 elements in list with value 100

    // cout<<" list ll: ";
    //     for(int i: ll)
    //         cout<<i;
    // cout<<endl;

    //     list<int> nl(ll); //copies all elements of list l
    
    // cout<<" list nl : ";
    //     for(int i: nl)
    //         cout<<i;
    // cout<<endl;

     
    //  list<int> l;
    //     l.push_back(1);   // inserting elements
    //     l.push_front(2);
    //     l.push_back(3);
    //     l.push_front(4);
    //     l.push_front(5);
    //     l.push_back(6);
    //     l.push_front(4);


    //     cout<<" list : ";
    //     for(int i: l)
    //         {
    //             cout<<i<<" ";
    //         }
    //      cout<<endl;

    //      l.pop_back();   // can remove elements
    //      l.pop_front();

    //     cout<<" list after poping: ";
    //     for(int i: l)
    //         {
    //             cout<<i;
    //         }
    //      cout<<endl;

    //      // we can also use erase function to erase single elements

    //      l.erase(l.begin());    // erase first element
    //      //l.erase(l.begin(),l.end()); // complete erase 
        
    //     cout<<" list after erasing: ";
    //     for(int i: l)
    //         {
    //             cout<<i;
    //         }
    //      cout<<endl;


// STACK ------------------------------------------------------------

// it follows LIFO i.e last in first out 


// stack<int> s;
// s.push(2);
// s.push(3);
// s.push(4);
// s.push(5);
// // s.capacity();   dont have capacity thing

// cout<<"top element of stack "<<s.top()<<endl;
// s.pop();
// cout<<"top element of stack "<<s.top()<<endl;

// cout<<"size of stack "<<s.size();



//  QUEUE ----------------------------------------------------------------------

//  it follows FIFO i.e first in first out 

// queue<int> q;
// q.push(2);
// q.push(3);
// q.push(4);
// q.push(5);



// cout<<"top element of stack "<<q.front()<<endl;
// q.pop();
// cout<<"top element of stack "<<q.front()<<endl;
// cout<<"top element of stack "<<q.back()<<endl;

// cout<<"size of stack "<<q.size();


// PRIORITY QUEUE ------------------------------------------------------------------

// //  iska first element humesa greatest hoga . like heap 

// // max heap
// priority_queue<int> maxi;  // it rearrange elements int the descending order automatically

// //min heap
// priority_queue< int, vector<int>, greater<int> > mini ; // elements arrahges in ascending order

// maxi.push(2);
// maxi.push(8);
// maxi.push(4);
// maxi.push(9);
// maxi.push(1);
// maxi.push(4);
// maxi.push(10);

// int size= maxi.size();

// cout<<"priority_queue maxi ";
// for (int i = 0; i < size; i++)
// {
//     cout<<maxi.top()<<" ";
//     maxi.pop();
// }
// cout<<endl;



// mini.push(2);
// mini.push(8);
// mini.push(4);
// mini.push(9);
// mini.push(1);
// mini.push(4);
// mini.push(10);

//  size= mini.size();

// cout<<"priority_queue mini ";

// for (int i = 0; i < size; i++)
// {
//     cout<<mini.top()<<" ";
//     mini.pop();
// }




// SET ---------------------------------------------------------------------

// it stores only unique element 
// it is of two type : set - sorted and  unordered_set : unsorted
// time complexity of : insert(), find(), erase() and count() is O(logN)

// set<int> s;

// s.insert(5);
// s.insert(5);
// s.insert(4);
// s.insert(2);
// s.insert(4);
// s.insert(1);  // insert operstion compexity is O(logN)

// cout<<"set ";
// for(auto i : s)
//     cout<<i<<' ';
// cout<<endl;

// s.erase(s.begin());
// cout<<"set ";
// for(auto i : s)
//     cout<<i<<' ';
// cout<<endl;

// set<int>::iterator it= s.begin();
// it++;

// s.erase(it);  // deletes particular value

// cout<<"set ";
// for(auto i : s)
//     cout<<i<<' ';
// cout<<endl;

// cout<<"5 is present "<<s.count(5)<<endl;   // checks if any number is present or not
// cout<<"4 is present "<<s.count(4)<<endl;

// set<int>::iterator itr= s.find(5); //this will return the index of the 5 if present

// cout<<"vaule present at itr "<<*itr<<endl;
// s.insert(3);
// s.insert(7);
// s.insert(0);
// s.insert(3);
// s.insert(4);
// cout<<"printing set using itrator ";
// for(auto it= itr; it!= s.end(); it++)
//     cout<<*it<<' ';
// cout<<endl;

// // it will print only those elements which are greater than or equal to the element pointed by iterator






// -------MAP --------------------------------

// isme bhi 2 types h ordered or simply map and unordered_map - not sorted
// key - vaule waala system h 

// in unordered map time complexity is O(1) whereas in ordered map it is O(logN) for count, insert, searching etc.
// bqz unordered map implementation uses hash table.

// map<int,string> m;

// m[1]="dharmendra";
// m[2]= "prachi";
// m[3]= "dom";
// m[4]= "aalu";
// m[5]= "jat";

// m.insert({6,"ram"});  
// // m.insert({6,"ram"},{7,"sita"},{8,"lakshman"}); // cant insert multiple values 

// for(auto i: m)
// {
//     cout<<i.first<<" "<<i.second<<endl;
// }

// cout<<"check if 2 is present"<<m.count(2)<<endl;

// cout<<"before erasing ";
// for(auto i: m)
// {
//     cout<<i.first<<" "<<i.second<<endl;
// }

// m.erase(2);

// cout<<"after erasing ";
// for(auto i: m)
// {
//     cout<<i.first<<" "<<i.second<<endl;
// }

// auto it = m.find(3);
// cout<<"value at it is "<<(*it).first<<endl;
// cout <<"according to iterator using find "<<endl;
// for(auto i= it; i != m.end(); i++)
//     cout<<(*i).first<<" "<<(*i).second<<endl;





// ------ STL ALGORITHMS ---------------------------------------------------------------------


// binary search algorithm stl---------------------

// vector<int> v;

// v.push_back(1);
// v.push_back(2);
// v.push_back(3);
// v.push_back(4);
// v.push_back(4);
// v.push_back(4);
// v.push_back(5);
// v.push_back(6);
// v.push_back(7);   // sorted for binary search

// cout<<"finding 5  "<<binary_search(v.begin(),v.end(),5)<<endl;  // if present returns 1 else 0;
// cout<<"finding -5  "<<binary_search(v.begin(),v.end(),-5)<<endl;  // if present returns 1 else 0;

 
// cout<<"lower bound of 4 "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
// cout<<"upper bound of 6 "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl; // upper bound gives +1 index 



// simple stl -------------------

// int a=2;
// int b=4;

// cout<<"max= "<<max(a,b)<<endl;
// cout<<"min= "<<min(a,b)<<endl;

// cout<<"before swaping a= "<<a<<" b= "<<b<<endl;
// swap(a,b);

// cout<<"after swaping a= "<<a<<" b= "<<b<<endl;

// string s= "absdkl";

// reverse(s.begin(),s.end());

// cout<<s<<endl;

vector<int> v;

v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(4);
v.push_back(4);
v.push_back(5);
v.push_back(6);
v.push_back(7); 

for(auto i: v)
    cout<<i;
cout<<endl;

rotate(v.begin(),v.begin()+3,v.end()); 
// first argument - where to start.
// second argument - kitne elements ko rotate krna h 
// first argument - kha pr rotate krna h 

for(auto i: v)
    cout<<i;
cout<<endl;


// quick sort heap sort and insertion sort se milkar btna h 
// STL sort function jo ki intro sort function hota  h

sort(v.begin(),v.end());
for(auto i: v)
    cout<<i;
cout<<endl;





return 0;
}
