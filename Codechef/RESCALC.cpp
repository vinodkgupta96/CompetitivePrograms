#include<bits/stdc++.h>
using namespace std;
 
#define le cin>>
#define fek cout<<
#define Varstr int temp;cin>>temp; 
#define Minqueue priority_queue<int>
#define nl cout<<endl; 
#define sp cout<<" ";
#define arrsz 100000
void swap(int* x,int* y)
{
        int z;
        z=*x; *y=z;
}
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
 
 
int isInterleave(string A, string B, string C) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i=0,j=0;
    int li=A.length(),lj=B.length();
    for (int k = 0; k < C.length(); ++k)
    {
          if(i<li&&C[k]==A[i]){i++; cout<<"i "<<i;}
          else if(j<lj&&C[k]==B[j]){j++; cout<<"j "<<j;}
          else {cout<<"vd "; return false;}
          nl
    }
    
        return true;
}
int power(long long int x, long long int y, long long int p)
{
    int res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or 
                // equal to p
     while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;  
    }
    return res;
}
 
int main(int argc, char const *argv[])
{
  
    int T; cin>>T;
    for (int p = 1; p <=T; ++p)    
    {
      
        int mx=-1,ind=-1;
        int N; cin>>N;
    for (int k = 1; k <= N; ++k)
        {
        
        vector<int> vec(7,0);       
        int ci; cin>>ci;
 
        for (int i = 0; i < ci; ++i)
        {
            int x; cin>>x;
            vec[x]++;
        }
 
        sort(vec.begin(),vec.end());
        int total=ci+vec[1]*4 +(vec[2]-vec[1])*2+(vec[3]-(vec[2]-vec[1])-vec[1])*1;
        if(total==mx){ind=-1;}
        else if(total >mx){mx=total; ind=k;}
         
        
        
        }
 
 
        if(ind==-1)cout<<"tie";
       else if(ind==1)cout<<"chef";
        else if(ind>1)cout<<ind;
        
        nl
 
    }
 
    return 0;
 
 
} 
