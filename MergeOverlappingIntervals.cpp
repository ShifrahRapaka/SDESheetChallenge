#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> v;
    vector<int> temp=intervals[0];
    for(auto i:intervals)
    {
        if(i[0]<=temp[1]) temp[1]=max(temp[1],i[1]);
        else
        {
            v.push_back(temp);
            temp=i;
        }
    }
    v.push_back(temp);
    return v;
}
