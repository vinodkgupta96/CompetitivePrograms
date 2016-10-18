#include <bits/stdc++.h>
using namespace std;
map<int,long long> dp;
long long Coins(long long n){
 
    if(n==0)
        {dp[n]=0;return dp[n];}
    else if(n==1) 
        {dp[n]=1;return dp[n];}
    else if(dp[n]!=0)
        return dp[n];
    else 
        {dp[n]=max(n,Coins(n/2)+Coins(n/3)+Coins(n/4)); return dp[n];}    
}
 
int main()
{
    long long T;
    while(cin>>T)
    {
        cout<<Coins(T)<<endl;
    }
    return 0;
}
