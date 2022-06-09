#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    set<char> st;
        int left=0,right=0;
        int cnt=0;
        int n=input.size();
        while(right<n)
        {
            if(st.find(input[right])!=st.end())
            {
                st.erase(input[left]);
                
                left++;
            }
            else
            {
                st.insert(input[right]);
                cnt=max(cnt,right-left+1);
                right++;
            }
        }
        return cnt;
}