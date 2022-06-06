#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    int t=m+n-1;
    int i=m-1,j=n-1;
    while(j>=0)
    {
        arr1[t--]=i>=0&&arr1[i]>arr2[j]?arr1[i--]:arr2[j--];
    }
    return arr1;
    
}