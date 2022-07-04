#include <bits/stdc++.h> 
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int col0 = 1, rows = matrix.size(), cols = matrix[0].size();
        
        // traverse the whole matrix
        for(int i=0;i<rows;i++)
        {
            // if value of 0'th col of any row is 0 then val of col0 is set to false
            if(matrix[i][0] == 0)
            {
                col0 = 0;
            }
            for(int j=1;j<cols;j++)
            {
                // if any value of matrix is 0 then the dummy value at 
                // topmost index and leftmost index is set to 0
                if(matrix[i][j]==0)
                {
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        //traverse the matrix backwards
        for(int i = rows-1; i>=0;i--)
        {
            for(int j=cols-1;j>=1;j--)
            {
                // if the value for a index in dummy array is 0 
                // then set the value for that index as 0
                if(matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
            // if value of col0 is false then set the value of
            // 0th col for that row as 0
            if(col0 == 0)
            {
                matrix[i][0] = 0;
            }
        }
    }
    
    