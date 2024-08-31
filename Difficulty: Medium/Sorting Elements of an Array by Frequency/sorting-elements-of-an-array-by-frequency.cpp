//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    static bool comp(pair<int,int> &a,pair<int,int> &b){
        if(a.first>b.first)
        return true;
        if(a.first==b.first)
        {
            return a.second<b.second;
        }
        
        return false;
    }
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        unordered_map<int,int> m;
        
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        
        vector<pair<int,int>> temp;
        
        for(auto x:m)
        {
            temp.push_back({x.second,x.first});
        }
        
        sort(temp.begin(),temp.end(),comp);
        //  for(int i=0;i<temp.size();i++)
        // {
        //     cout<<temp[i].first<<" "<<temp[i].second<<endl;
            
        // }
        vector<int> ans;
        for(int i=0;i<temp.size();i++)
        {
            for(int j=0;j<temp[i].first;j++)
            {
                ans.push_back(temp[i].second);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends