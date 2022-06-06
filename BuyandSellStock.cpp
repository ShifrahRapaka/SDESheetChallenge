#include<bits/stdc++.h>
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int n=prices.size(),pro=INT_MIN,mp=prices[0];
    for(int i=0;i<n;i++)
    {
        if(prices[i]<mp) mp=prices[i];
        else pro=max(pro,prices[i]-mp);
    }
    return pro;
}