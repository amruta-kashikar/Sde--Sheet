#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums) { 
    int low = 0 , mid = 0, high = nums.size()-1;
    for(int i=0;i<nums.size();i++)
    {
        while(mid<=high)
        {
            switch(nums[mid])
            {
                case 0:
                    swap(nums[mid++],nums[low++]);
                    break;
                case 1:
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[high--]);
            }
        }
    }
}    