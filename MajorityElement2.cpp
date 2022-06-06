#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    vector<int> v;
    int n=arr.size();
    int c1=0,c2=0,ca1=0,ca2=0;
    for(auto i:arr)
    {
        if(i==ca1) c1++;
        else if(i==ca2) c2++;
        else if(c1==0) {ca1=i;c1=1;}
        else if(c2==0) {ca2=i;c2=1;}
        else {c1--;c2--;}
    }
    c1=0;
    c2=0;
    for(auto i:arr)
    {
        if(i==ca1) c1++;
        else if(i==ca2) c2++;
    }
    if(c1>n/3) v.push_back(ca1);
    if(c2>n/3) v.push_back(ca2);
    return v;

}