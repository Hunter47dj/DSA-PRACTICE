#include<iostream>
#include<vector>
using namespace std;



    int binarySearch(vector<int>& nums, int target,int start, int end) {
        int s = start;
        int e = end;
        int mid = (s + e) / 2;

        while (s < e) {
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                s = mid + 1;
            else
                e = mid - 1;

            mid = (s + e) / 2;
        }
        return -1;
    }

    int pivot(vector<int>& nums) {
        int s = 0;
        int e = nums.size() - 1;
        int mid = (s + e) / 2;

        while (s <= e) {
            if (nums[mid] >= nums[0])
                s = mid + 1;
            else
                e = mid;
            mid = (s + e) / 2;
        }
        return s;
    }

    int search(vector<int>& nums, int target) 
    {
         int pivotIndex = pivot(nums);
         cout<<"pivot : "<<pivotIndex<<endl;

         int start= 0;
         int end = nums.size()-1;

         if(nums[0] > target)
            return binarySearch(nums, target, pivotIndex, end);
        else 
            return binarySearch(nums, target, start, pivotIndex);


     }



int main()
{ 
    vector<int> nums = {4, 5, 6, 7, 1, 2, 3};
    int target =1;
    cout<<search(nums, target);
return 0;
}