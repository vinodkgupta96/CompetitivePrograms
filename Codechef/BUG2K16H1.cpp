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
      map<char,int>mp;
      string str; cin>>str;
      for (int i = 0; i < str.length(); ++i)
      {
        mp[str[i]]++;
      }
      for (map<char,int>::iterator it = mp.begin(); it != mp.end(); ++it)
      {
         if(it->second!=1)
          cout<<it->first<<it->second;
         else
         cout<<it->first;   
      }
      nl
      }
 
    return 0;
 
 
} 
