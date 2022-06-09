#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    unordered_set<int> s;
    for(int i:arr) s.insert(i);
    int c=0;
    for(int i:arr)
    {
        if(!s.count(i-1))
        {
            int cn=i;
            int cs=1;
            while(s.count(cn+1))
            {
                cn+=1;
                cs+=1;
            }
            c=max(c,cs);
        }
        
    }
    return c;
}