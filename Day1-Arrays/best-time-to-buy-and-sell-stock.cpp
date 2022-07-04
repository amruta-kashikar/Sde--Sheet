#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int ans = 0;
    int currmin = prices[0];
    for(int i=1;i<prices.size();i++)
    {
        int cost = prices[i] - currmin;
        ans = max(ans,cost);
        currmin = min(currmin,prices[i]);
    }
    return ans;
}