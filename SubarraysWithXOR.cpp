#include<bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int,int> mpp;
    int cpx=0;
    long long c=0;
    for(int i=0;i<arr.size();i++)
    {
        cpx^=arr[i];
        if(cpx==x) c++;
        int h=cpx^x;
        if(mpp.find(h)!=mpp.end())
        {
            c+=mpp[h];
        }
        
            mpp[cpx]++;
        
    }
    return c;
}