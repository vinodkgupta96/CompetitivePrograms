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
int cmp=0,swp=0;
  
  int compare(int a, int b) 
    {
      cmp++;
      if (a > b) return 1;
      else return -1;
    }
 
   void swap(int * a, int * b)
   {
      swp++;
      int x; x = *b;
      *b=*a; *a=x;
   } 
 
struct cell{
 
  int count;
  int prob;
};
 
 
 
 
int main(int argc, char const *argv[])
{
    testcase{
 
        long long int n,b,m;
        cin>>n>>b>>m;
        long long int final_time=0;
 
        while(n!=0)
        {
           
           if(n%2==0){ n=n/2; final_time+=n*m;}
           else {final_time+=(n+1)/2*m; n= n-(n+1)/2;}
           if(n!=0)final_time+=b;
           m*=2;            
        }
        cout<<final_time; nl
      }
 
    return 0;
 
 
} 
