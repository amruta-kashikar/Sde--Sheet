class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        for(int i=0;i<nums.size();i++){
                int start=i+1;
                int end=nums.size()-1;
                int target=-1*nums[i];
                while(start<end){
                    if(nums[start]+nums[end]<target){
                        start++;
                    }
                    else if(nums[start]+nums[end]>target){
                        end--;
                    }
                    else{
                        
                        v.push_back({nums[i],nums[start],nums[end]});
                        int st=nums[start];
                        int en=nums[end];
                        while(start<end&&nums[start]==st){
                            start++;
                        }
                        while(start<end&&nums[end]==en){
                            end--;
                        }
                        
                    }
                }
            while(i<nums.size()-1&&nums[i]==nums[i+1]){
                i++;
            }
            
            }
        return v;
    }
};