#include<bits/stdc++.h>
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    pair<int,int> p;
    int x=0,y=0;
    int xor1=arr[0];
    for(int i=1;i<n;i++)
    {
        xor1=xor1^arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        xor1=xor1^i;
    }
    int setbit=xor1&~(xor1-1);
    for(int i=0;i<n;i++)
    {
        if(arr[i]&setbit) x=x^arr[i];
        else y=y^arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(i&setbit) x=x^i;
        else y=y^i;
    }
    for(int i=0;i<n;i++)
    {
        if(x==arr[i])
        {
            p.first=y;
            p.second=x;
            break;
        }
        if(y==arr[i])
        {
            p.first=x;
            p.second=y;
            break;
        }
        
    }
    
    return p;
    
	
}
