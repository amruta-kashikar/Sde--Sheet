#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int highestIndx = 0,count = 1;
        for(int i=0;i<nums.size();i++)
        {
            highestIndx = i;
            
            if(nums[highestIndx] == nums[i])
            {
                count++;
            }
            else{
                count--;
            }
            
            if(count==0){
                highestIndx = i;
                count = 1;
            }
        }
        
        return nums[highestIndx];
        
    }
};