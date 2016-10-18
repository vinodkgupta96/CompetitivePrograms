#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n ){
    int i;
    for(i=2;i<=sqrt(n);i++){if(n%i == 0) return false;}
    return true;
        
}
 
 
 
int main(int argc, char const *argv[])
{
 
   /* int n=interval.size();
    int a=newInterval.start,b=newInterval.end;
    for (int i = 0; i <n ; ++i)
    {
        int x=interval[i].start,y=interval[i].end;
        Interval _i; 
        if(b<x)
        {
           _i.start=a;_i.end=b; 
           interval.insert(insert.begin(),_i);     
        }
 
        else if(y>b && a<x<b)
        {
            _i.start=a;_i.end=b;
 
        }
        else if(a==x&&x<b<y){}
        else if(a==x&&b==y){}    
        else if(x<a<y&&b==y){}
        else if(a>x&&a<y<b){}
        else if(a==y){}
            
 
    }
*/
    int T;cin>>T;
    while(T--)
    {
        long long m,n; cin>>m>>n;
        long long ans=m*n-1;
        if(ans%2==0)cout<<"No";
         else cout<<"Yes";
 
         cout<<endl;   
    }
 
    return 0;
}
