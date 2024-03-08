//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		bool chk(vector<int> &v){
        bool flag = true;
	        int pp = 0;
	        for(int j = 0; j < 26; j++){
	            if(v[j] == 0){
	                continue;
	            }
	            if(pp == 0){
	                pp = v[j];
	            }
	            if(pp != v[j]){
	                flag = false;
	            }
	        }
	        return flag;
    }
	bool sameFreq(string s)
	{
	    vector<int> v(26);
	    for(auto i : s){
	        v[i-'a']++;
	    }
	    if(chk(v)){
	        return true;
	    }
	    for(int i = 0; i < 26; i++){
	        if(v[i] == 0){
	            continue;
	        }
	        v[i]--;
	        bool flag = chk(v);
	        v[i]++;
	        if(flag){
	            return true;
	        }
	    }
	    return false;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends