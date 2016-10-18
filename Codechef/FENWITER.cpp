#include<bits/stdc++.h>
 
using namespace std;
 
#define le cin>>
#define fek cout<<
#define Minqueue priority_queue<int>
#define nl cout<<endl; 
#define sp cout<<" ";
#define arrsz 100000
#define testcase int T; cin>>T; for (int t = 1; t <=T; ++t)
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
 
#define Minheap priority_queue<int,vector<int>,greater<int> >minheap;
int read_int() {
  char c = getchar();
  while(c<'0' || c>'9') c = getchar();
  int ret = 0;
  while(c>='0' && c<='9') {
    ret = 10 * ret + c - 48;
    c = getchar();
  }
  return ret;
 
}
 
int add(vector<int>&vec)
{
    int carry=1;
  for (int i = vec.size()-1; i >=0; --i)
  {
    int x=(vec[i]+carry) %2;
    carry=(vec[i]+carry)/2;
    vec[i]=x;
  }
  carry=vec.size()!=0?carry:0; 
  return carry;
}
 
int subtract(vector<int>&vec)
{
   int carry=1;
  for (int i = vec.size()-1; i >=0; --i)
  {
    if(vec[i]==carry){vec[i]=0;return 0;}
    else if(vec[i]<0){vec[i]+=2;vec[i-1]=vec[i-1]==1?0:-1;}
    else if(vec[i]<carry){carry=0; vec[i]+=1;vec[i-1]=vec[i-1]==1?0:-1;}
    else if(vec[i]>carry)return 0;
    
  }
  return carry; 
}
 
 
int setbits(vector<int>vec)
{
  int setbt=0;
  for (int i = 0; i < vec.size(); ++i)
  {
    if(vec[i]==1)setbt++;
  }
  return setbt;
}
 
int main()
{
   
  testcase
  {
    string L1,L2,L3; cin>>L1>>L2>>L3;
    vector<int> X,Y,Z;
    for (int i = 0; i < L1.length(); ++i)
    {
      int temp= (L1[i]=='1'?1:0);
      X.push_back(temp);
    }
 
     for (int i = 0; i < L2.length(); ++i)
    {
      int temp=(L2[i]=='1'?1:0);
      Y.push_back(temp);
    }
    
     for (int i = 0; i < L3.length(); ++i)
    {
      int temp=(L3[i]=='1'?1:0);
      Z.push_back(temp);
    }
 
    int n; cin>>n;
 
    int ans=0;
    int c=0,b=0,a=0;
    c=add(Z);
    int b1=setbits(Y);
    
    if(c==1)   
    {
      b=add(Y);
      if(b==1)
        {a=add(X);cout<<a+setbits(X)+(n*setbits(Y))+setbits(Z);}
      else 
        {cout<<a+setbits(X)+((n-1)*b1)+setbits(Y)+setbits(Z); }
        
    }
    else   
    {
      cout<<a+setbits(X)+(n*setbits(Y))+setbits(Z);
    }  
    
    nl    
  }
 
    return 0;
 
 
} 
