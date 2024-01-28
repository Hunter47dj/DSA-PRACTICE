#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sum(vector<int>& nums, int start, int end)
    {  int sum=0;
        for(int i=start; i<=end; i++)
        {
            sum+=nums[i];
        }
        return sum;
    }

int pivotIndex(vector<int>& nums) {
    int leftsum=0,rightsum=0;

    int s=0;
    int e= nums.size()-1;
    int mid = (s+e)/2;
   int k=0;
    while(mid !=s || mid !=e)
    {   cout<<k++;
        
        leftsum= sum(nums,s,mid-1);
        rightsum= sum(nums,mid+1,e);

        if(leftsum == rightsum)
            return mid;
        else if(leftsum > rightsum)
            mid--;
        else mid++;
        
    }
    return -1;
    }


int main()
{  
    vector<int> nums ={ 1,2,3};
    int pivot = pivotIndex(nums);
    cout<<"pivot:"<<pivot+1;
return 0;
}