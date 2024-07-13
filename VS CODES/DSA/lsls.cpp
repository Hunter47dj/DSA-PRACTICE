#include<iostream>
using namespace std;

int solve(int n)
        {
            if(n<0)
		        return 0;
		    if(n==0)
		        return 1;
		          
		    return min(solve(n-1), solve(n-2));
        }
	
		int nthStair(int n){
		    //  Code here
		    // base case
		    return solve(n);
		}

int main()
{ 
    cout<<nthStair(5);
return 0;
}