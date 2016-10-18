#include<bits/stdc++.h>
using namespace std;
bool isodd(int x){}
int main(int argc, char const *argv[])
{	
  
  int T; cin>>T;
  while(T--)
  {
      int n; cin>>n;
      int tmp;string str; cin>>str;
      for (int i = 0; i < n; ++i)
      {
        cin>>tmp;
      }
 
      //cout<<n<<" "<<tmp<<" "<<str<<endl;
      
      if(n==1 && tmp%2==0 && str=="Dee")cout<<"Dee"<<endl;
      else cout<<"Dum"<<endl;
 
  }
  
 
	return 0;
} 
