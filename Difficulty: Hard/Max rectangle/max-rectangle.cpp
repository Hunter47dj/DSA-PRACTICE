//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
  
   int getMaxArea(int arr[], int n)
    {
        // Your code here
         stack<int>st;
        int maxi=INT_MIN;
        
        for(int i=0;i<=n;i++){
            
            while(!st.empty() && (i==n || arr[st.top()]>=arr[i])){
                
                int height=arr[st.top()];
                st.pop();
                int width;
                if(st.empty()) {
                    width=i;
                    
                }
                else{
                    width=i-st.top()-1;
                }
                
                maxi=max(maxi,width*height);
            }
            
             st.push(i);
            
        }
        
    return maxi;
    }
  
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        
        int arr[m] ={0};
        int newArea = INT_MIN;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(M[i][j] ==1)
                {
                    arr[j] = arr[j]+ M[i][j];
                }
                else {
                    arr[j] = 0;
                }
            }
            
            newArea = max(newArea, getMaxArea(arr,m));
            
        }
        int ans = newArea;
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends