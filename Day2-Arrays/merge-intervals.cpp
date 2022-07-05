#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        // Code here
        vector<vector<int>> res;
        sort(intervals.begin(),intervals.end());
        // edge case
        if(intervals.size() == 0)
        {
            return res;
        }
        vector<int> temp = intervals[0];
        for(int i=1;i<intervals.size();i++)
        {
            if(temp[1] < intervals[i][0])
            {
                res.push_back(temp);
                temp = intervals[i];
            }
            else{
                temp[1] = max(temp[1],intervals[i][1]);
            }
        }
        res.push_back(temp);
        return res;
}