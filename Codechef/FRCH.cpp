#include<bits/stdc++.h>
 
using namespace std;
 
#define le cin>>
#define fek cout<<
#define Varstr int temp;cin>>temp; 
#define Minqueue priority_queue<int>
#define nl cout<<endl; 
#define sp cout<<" ";
#define arrsz 100000
#define testcase int T; cin>>T; for (int p = 1; p <=T; ++p)
#define dbg1 cout<<"#"<<endl;
#define dbg2 cout<<"@"<<endl;
bool isPrime(int n)
{
    
    if (n <= 1)  return false;
    if (n <= 3)  return true;
 
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
 
    return true;
}
int mult=0;  
 
struct trees{
  int ht;
  int rate; 
};
 
bool fun(trees a, trees b)
{
  return a.ht+mult*a.rate>b.ht+mult*b.rate;
}
long long n,s;
long long arr[10000000];
 vector<long long>bfr;
int main(int argc, char const *argv[])
{
    testcase{
      
       scanf("%lld",&n);
      long long sum=0;
      for (int i = 0; i < n; ++i)
      {
        scanf("%lld",&arr[i]) ;sum+=arr[i];
      }
       scanf("%lld",&s);
      if(sum <s)printf("BING");
      else if(sum==s)
      {
        int turn =1;
        int i=1,j=n;
        while(i<=j){if(turn%2!=0){cout<<i<<" ";i++;} else {cout<<j<<" ";j--;}  turn++;}
      } 
      else
      {
       bfr.clear();
        long long fsm=0;
        int i=0,j=n-1;
        long long turn=0;
        while(i<=j)
        {
            if(turn%2==0)
              {fsm+=arr[i]; bfr.push_back(i+1);i++; }
            else {fsm+=arr[j];bfr.push_back(j+1);j--;}
 
            if(fsm>=s)break;
            turn++;
           
        }
        if(fsm!=s)printf("BING");
        else
        {
          for (int i = 0; i < bfr.size(); ++i)
          {
            printf("%lld ",bfr[i]);
           
          }
        }
      }
      nl
    } 
    return 0;
 
 
} 
