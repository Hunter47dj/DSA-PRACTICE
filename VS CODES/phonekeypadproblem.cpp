#include<bits/stdc++.h>
#include<vector>
class Solution {
public:
    void solve(string &nums, int index,vector<string> &ans)
    {
        // base case
        if(index >= nums.length())
        {
            ans.push_back(nums);
            return;
        }


        for(int i = index ; i< nums.length(); i++)
        {
            swap(nums[index],nums[i]);
            solve(nums, index+1, ans);
            swap(nums[index],nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
    
        int index=0;

        solve(nums,index,ans);

        return ans;
            
    }
};