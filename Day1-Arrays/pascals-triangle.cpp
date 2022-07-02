#include <bits/stdc++.h> 
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
      // Write your code here.
      vector<vector<long long int>> vec(n);
      for(int i=0;i<n;i++)
      {
          vec[i].resize(i+1);
          vec[i][0] = vec[i][i] = 1;
          
          for(int j=1;j<i;j++)
          {
              vec[i][j] = vec[i-1][j-1] + vec[i-1][j];
          }
      }
    return vec;
}