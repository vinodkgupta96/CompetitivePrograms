#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  
 int n,k; cin>>n>>k;
 int click[1001];
 
 for (int i = 1; i <= n; ++i)
 {
   click[i]=0;
 }
 
 
 int counter=0;
 for (int i = 0; i < k; ++i)
 {
   
   string str; cin>>str;
   
   if(str.compare("CLICK")==0) 
    { int _n; cin>>_n;
      if(click[_n]==0) {counter++;click[_n]=1; } 
      else
      {counter--;click[_n]=0;      }
    }
 
    else if(str.compare("CLOSEALL")==0)
    {
        for (int j = 1; j <= n; ++j)
          {
              click[j]=0;
          }
        counter=0;  
    }
 
    cout<<counter<<endl;
 }
  return 0;
} 
