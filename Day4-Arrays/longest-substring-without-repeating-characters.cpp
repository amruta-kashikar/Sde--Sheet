#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int a = 0, maxi=0;
        vector<char> vec;
        
        for(int i=0;i<s.size();i++)
        {
            auto it = find(vec.begin(),vec.end(),s[i]);
            if(it!=vec.end())
            {
                vec.erase(vec.begin(),it+1);
                vec.push_back(s[i]);
            }
            else{
                vec.push_back(s[i]);
                a = vec.size();
                maxi = max(maxi,a);
            }
        }
        return maxi;
    }
};