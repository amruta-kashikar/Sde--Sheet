#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
    map<int,int> mp;
    int ans = 0;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }
    for(auto it: mp)
    {
        if(it.second >=2)
        {
            ans = it.first;
        }
    }
    return ans;
}
