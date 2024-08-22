//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		      queue<pair<string,int>> q;
            vector<string> ans;
            ans.push_back(S);
            q.push({S,0});
            while(!q.empty()){
                string per = q.front().first;
                string s1 = ans.back();
                int i = q.front().second;
                if(per != s1){
                    ans.push_back(per);
                }
                q.pop();
                for(int j = i; j<S.length(); j++){
                  swap(per[i],per[j]);
                  q.push({per,i+1});
                }
            }
            unordered_map<string,int>m;
            for(int i=0; i<ans.size();i++){
                m[ans[i]]++;
            }
            ans.clear();
            for(auto i:m){
                ans.push_back(i.first);
            }
            return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    sort(ans.begin(),ans.end());
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends