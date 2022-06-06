#include<bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long m=INT_MIN,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        m=max(sum,m);
        if(sum<0) sum=0;
        
    }
    if(m<0) return 0;
      else  
    return m;
}