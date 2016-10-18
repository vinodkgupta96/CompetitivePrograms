#include<bits/stdc++.h>
using namespace std;
 
#define nl cout<<endl; 
#define sp cout<<" ";
#define arrsz 100000
#define testcase int T; cin>>T; for (int p = 1; p <=T; ++p)
#define dbg1 cout<<"#"<<endl;
#define dbg2 cout<<"@"<<endl;
#define gc getchar
/*bool isPrime(int n)
{
    
    if (n <= 1)  return false;
    if (n <= 3)  return true;
 
    if (n%2 == 0 || n%3 == 0) return false;
 
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
 
    return true;
}
*/
int fast_read_int() {
  char c = gc();
  while(c<'0' || c>'9') c = gc();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = gc();
  }
  return ret;
 
}
 
 
int main()
{
 
    testcase 
    {
        int n,m,c; cin>>n>>m>>c;
        int res=0;
        for (int i = 1; i <= c; ++i)
        {
            
            if((c%i==0)&&i<=n&&(c/i)<=m)res++;
        }
        cout<<res; nl
    }
    return 0;
}
