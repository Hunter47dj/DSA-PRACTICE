#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// reversing the string -------------------------------------------
// using two pointers

void reversestr2(string &str, int start, int end)
{
    if(start >= end)  // empty or one character string i.e. already sorted
        return ;
    
    swap(str[start],str[end]);  
    start++; end--;          
    reversestr2(str,start,end);
}

// using one pointer

void reversestr(string &str, int i)   // i will control start and end position
{
    if(i >= str.length()-1-i)
        return; 
    
    swap(str[i],str[ str.length()-1-i ]);
    i++; // increasing the position of the start and end 
    reversestr(str,i);
}








// check string for palindrome ----------------------------------------
// 
bool Check(string &str,int start, int end)
{
    if(start>=end)         // considering string is not empty
        return true;

    if(str[start] != str[end])
        return false;
    else 
        {
            start++;
            end--;
            Check(str,start,end);
        }
    
}








// CALCULATING POWER i.e a^b

int counter =0;
int power(int a, int b)    // efficient if value of b is not large as time complexity is O(b)
{   
  //  cout<<"counter "<<counter++<<endl;
    if(b==0)
        return 1; 
    
    return a*power(a,b-1);
}

// we can optimize the above function as 
/*
if b is even then a^b = a^(b/2) * a^(b/2)
if b is odd then a^b = a * a^(b/2) * a^(b/2)
*/

int OptPower(int a, int b)
 { //  cout<<"counter "<<counter++<<endl;
    // base cases
    if(b==0)
        return 1;
    if(b==1)
        return a;
    
    // recursive call
    int ans = OptPower(a,b/2);

    //if b is even
    if(b%2==0)
        return ans*ans;
    else 
    return a*ans*ans;
}

int main()
{ 
    // using inbuilt  function , for this include bits/stdc++.h library
    string str = "naman";

    // cout<<"original string : "<< str<< endl;

    // reverse(str.begin(),str.end());

    // cout<<"using inbuilt function "<<str<<endl;
    
   

    // int s=0;
    // int end= str.length()-1;
    

    // using recursion 

    // reversestr(str,s);

    // cout<<"using recursion by single pointer "<<str<<endl;
    
    // reversestr2(str,s,end);

    // cout<<"using recursion by double pointers "<<str<<endl;

 // using swap function to swap the characters of string

    // while (s<=end)
    // {
    //     swap(str[s++],str[end--]);
    // }
    
    // cout<<"using while loop "<<str<<endl;


    // check if string is palindrome --------------------------------

    // string pali ="rabbar";
    // int s=0;
    // int end= pali.length()-1;
    // cout<<"is palindrome :"<<Check(pali,s,end);



    // calculate the a power raise to b i.e a^b -------------------------------

    int a=2,b=11;
    // cin>>a>>b;

    // cout<<"ans "<<power(a,b)<<endl;
    // counter =0;
    // cout<<"\n\n\n\n\n";
    // cout<<" optimized ans "<<OptPower(a,b)<<endl;

    /* 
    from output of couter we can see that less number of recursive calls are needed 
    in the optimized power function i.e. approximately half recursive calls are needed.
    */
return 0;
}