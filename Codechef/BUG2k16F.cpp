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
 
bool isSubsequenceweight(int sequence[], int n, int weight)
{
   bool smallsubset[weight+1][n+1];
 
  for (int i = 0; i <= n; i++)
  smallsubset[0][i] = true;
 
  for (int i = 1; i <= weight; i++)
  smallsubset[i][0] = false;
 
  for (int i = 1; i <= weight; i++)
  {
  for (int j = 1; j <= n; j++)
  {
    smallsubset[i][j] = smallsubset[i][j-1];
    if (i >= sequence[j-1])
    smallsubset[i][j] = smallsubset[i][j] || 
                smallsubset[i - sequence[j-1]][j-1];
  }
  }
 
  return smallsubset[weight][n];
}
 
 
 
int main(int argc, char const *argv[])
{
    testcase{
      int n,k; cin>>n>>k;
      int v[n];
      for (int i = 0; i < n; ++i)
      {
        cin>>v[i];
      }
      if(isSubsequenceweight(v,n,k)==true)
        cout<<"YES!";
      else cout<<"NO!";
      nl
 
      }
 
    return 0;
 
 
} 
