#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    x=x%m;
    int res=1;
    while(n>0)
    {
        if(n&1)
            res=(1LL*res*(x)%m);
        x=1LL*(x)%m*(x)%m;
        n>>=1;
    }
    return res%m;
}