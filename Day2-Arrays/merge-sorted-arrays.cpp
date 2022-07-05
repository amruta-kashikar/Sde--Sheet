#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int k=n+m-1 , i ,j;
    for(i=m-1,j=n-1; i>=0 && j>=0; k--) {
        if(nums1[i]>nums2[j]) {
            nums1[k]=nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
    }
    while(j>=0) {
        nums1[j] = nums2[j];
        j--;
    }
}