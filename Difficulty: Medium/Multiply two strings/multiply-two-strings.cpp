//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    int sign=1;
    vector<int> getNum(string str){
        int ind=0;
        int slen = str.length();
        if(str[0] == '-') {sign = -1*sign; ind++; };
        if(str[0] == '+') ind++;
        
        while(str[ind] == '0' && ind<slen){
            ind++;
        }
        
        vector<int>num;
        while(ind<slen){
            int ch = str[ind] - '0';
            num.push_back(ch);
            ind++;
        }
        return num;
    }
    
    
    vector<int> multiplyNums(vector<int>num1,vector<int>num2){
        int n1size = num1.size();
        int n2size = num2.size();
        int ansSize = max(n1size,n2size)+10000;
        vector<int>ans(ansSize+1,0);
        for(int i=n1size-1;i>=0;i--){
            int carry=0;
            int k = ansSize;
            for(int j=n2size-1;j>=0;j--){
                int mult = num2[j]*num1[i] + carry;
                carry = mult/10;
                int t = ans[k] + mult%10;
                carry+=t/10;
                ans[k] = t%10;
                k--;
            }
            if(carry){   
                ans[k]+= carry;
            }
            ansSize--;
        }
        return ans;
    }
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       //Your code here
        vector<int>num1 = getNum(s1);
        vector<int>num2 = getNum(s2);
        vector<int>ans = multiplyNums(num1,num2);
        string ansStr="";
        int ind=0;
        int ansSize = ans.size();
        while(ind<ansSize && ans[ind]==0){
            ind++;
        }
        while(ind<ansSize){
            ansStr+= to_string(ans[ind]);
            ind++;
        }
        if(ansStr.length() && sign==-1){
            string temp = "-";
            ansStr = temp +ansStr;
        }
        if(ansStr==""){
            ansStr+='0';
        }
        return ansStr;
        
    }
    

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends