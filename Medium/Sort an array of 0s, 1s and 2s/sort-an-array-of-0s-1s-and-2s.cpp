//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int arr[], int n)
    {
        // code here 
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        int i =0;
        while(i<n)
        {
            if(arr[i] == 0)
                cnt0++;
            if(arr[i] == 1)
                cnt1++;
            if(arr[i] == 2)
                cnt2++;
                
            i++;
        }
        i = 0;
        for(; i<n && cnt0 >0 ; i++)
        {
            arr[i] = 0;
            cnt0--;
        }
        for(; i<n && cnt1 >0 ; i++)
        {
            arr[i] = 1;
            cnt1--;
        }
        for(; i<n && cnt2 >0 ; i++)
        {
            arr[i] = 2;
            cnt2--;
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends