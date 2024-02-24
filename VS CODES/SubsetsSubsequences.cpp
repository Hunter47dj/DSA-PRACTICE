#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> &nums, int index, vector<int> &output, vector<vector<int>> &ans)
{
    // base case
    int size = nums.size();
    if (index >= size)
    {
        ans.push_back(output);
        return;
    }
    
    //exclude 
    solve(nums, index + 1, output, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, index + 1, output, ans);

}

vector<vector<int>> SubSets(vector<int> &nums)
{
    vector<vector<int>> ans;

    vector<int> output;
    int index = 0;

    solve(nums, index, output, ans);

    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> lss = SubSets(nums);

    int row = lss.size();
    int col = lss[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           cout<< lss[i][j]<<" ";
        } cout<<endl;
        
    }
    

    return 0;
}