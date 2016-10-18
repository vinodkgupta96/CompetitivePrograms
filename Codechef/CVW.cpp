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
 
 
int main(int argc, char const *argv[])
{
    testcase{
      long long n,K; cin>>n>>K;
      if(K!=0&&n%K!=0 || K!=0&&n%K==0&&(n/K)%2!=0){cout<<"CAPTAIN AMERICA EVADES ";}
      else if(K==0)
      {
        
        for (int i = 1; i <= n; ++i)
        {
          cout<<i<<" ";
        }
      }
      else
      {
        int k=1,flag=1;
        for (int i = 1; i <= n/K; ++i)
        {
          if(i%2==0)flag=-1;
          else flag=1;
          for (int j = 1; j <= K; ++j)
          {
              
              cout<<k+flag*K<<" ";
              k++;
          }
        }
 
      }
      nl
    } 
    return 0;
 
 
} 
