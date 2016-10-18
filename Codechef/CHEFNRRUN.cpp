
      continue;
    }
    
    
  else  if((n%2==1 && m<((n-1)*(n-1))/4) || (n%2==0 && m<((n*(n-2))/4)))
    {
      for(int i=0;i<m;i++)
      {
        int a,b;
      cin>>a>>b;
      }
      cout<<"NO"<<endl;
      continue;
    }
          
        else
        {
          for (int i = 1; i <= m; ++i)
                       {
                           int x,y; cin>>x>>y;
                           v[x].push_back(y);
                           v[y].push_back(x);
                       }
        
                 for (int i = 1; i <= n; ++i)
                       {
                           ini_hold.push_back(i);
                       }
                    
                map<int,int>a,b;         
                int al=0,bl=0;                
                vector<int>fin_hold;
                int prv1=INT_MIN,prv2=n;
                int q=0;                   
                while(ini_hold.size()!=0&&flg==0){
                    if(ini_hold.size()==n||prv2==prv1)
                    {   q=0;
                      a[ini_hold[0]]=1; al++;q++;}
                    
                    for (int i = q; i < ini_hold.size(); ++i)
                    {
                        int tal=0,tbl=0;
                        for (int j = 0; j < v[ini_hold[i]].size(); ++j)
                        {
                            if(a[v[ini_hold[i]][j]]==1)tal++;
                            if(b[v[ini_hold[i]][j]]==1)tbl++;
        
                        }
                        
                        
                        if(tal>=al&&(tbl>=bl||bl==0))fin_hold.push_back(ini_hold[i]);
                        else if(tal<al&&bl==0){bl++; b[ini_hold[i]]=1;}
                        else if(tal>=al){al++;a[ini_hold[i]]=1;}
                        else if(tbl>=bl){bl++;b[ini_hold[i]]=1;}
                        else if(tbl<bl&&tal<al){flg=1;break;}  
                        
                        
                        
                    }
                    fin_hold.swap(ini_hold);       
                    fin_hold.clear();  
                    prv1=prv2;
                    prv2=ini_hold.size();
                    }
                    if(flg==1){cout<<"NO";}
                    else cout<<"YES";
                    nl
        }
                      
    }
 
    return 0;
 
}*/
 
int main()
{
testcase	
	{int n,m; cin>>n>>m; if(n==1 || n==2)
		{for(int j=0;j<m;j++)
			{
				int a,b;cin>>a>>b;
			}YES continue;
		}
		/*  else if(n==1 || n==2)
    {
      for(int i=0;i<m;i++)
      {
        int x,y;
        cin>>x>>y;
      }
      cout<<"YES"<<endl;
      continue;
    }
    */
    for (int vinod = 0; vinod < 5; ++vinod)
    {
    	vinod+=0;
    }
    
 
		if(m>=(n*(n-1))/2 -2){for(int j=0;j<m;j++)
			{int a,b;cin>>a>>b;	}YES
			continue;
		}
 
 
 
 
		for (int vinod = 0; vinod < 5; ++vinod)
    {
    	vinod+=0;
    }
    
/*#include<bits/stdc++.h>
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
 
int main(int argc, char const *argv[])
{
  
    testcase
    {
        
        int n,m; cin>>n>>m;
        int flg=0;
        vector<int>v[n+1];
        vector<int> ini_hold;
     
        if(m>((n*(n-1))/2-2))
          {  for (int i = 1; i <= m; ++i)
                       {
                           int x,y; cin>>x>>y;
                           v[x].push_back(y);
                           v[y].push_back(x); 
                       } cout<<"YES";nl
          }
    
   else if(n==1 || n==2)
    {
      for(int i=0;i<m;i++)
      {
        int x,y;
        cin>>x>>y;
      }
      cout<<"YES"<<endl;
      continue;
    }
    
    
  else  if((n%2==1 && m<((n-1)*(n-1))/4) || (n%2==0 && m<((n*(n-2))/4)))
    {
      for(int i=0;i<m;i++)
      {
        int a,b;
      cin>>a>>b;
      }
      cout<<"NO"<<endl;
      continue;
    }
          
        else
        {
          for (int i = 1; i <= m; ++i)
                       {
                           int x,y; cin>>x>>y;
                           v[x].push_back(y);
                           v[y].push_back(x);
                       }
        
                 for (int i = 1; i <= n; ++i)
                       {
                           ini_hold.push_back(i);
                       }
                    
                map<int,int>a,b;         
                int al=0,bl=0;                
                vector<int>fin_hold;
                int prv1=INT_MIN,prv2=n;
                int q=0;                   
                while(ini_hold.size()!=0&&flg==0){
 
                    if(ini_hold.size()==n||prv2==prv1)
                    {   q=0;
                      a[ini_hold[0]]=1; al++;q++;}
                    
                    for (int i = q; i < ini_hold.size(); ++i)
                    {
                        int tal=0,tbl=0;
                        for (int j = 0; j < v[ini_hold[i]].size(); ++j)
                        {
                            if(a[v[ini_hold[i]][j]]==1)tal++;
                            if(b[v[ini_hold[i]][j]]==1)tbl++;
        
                        }
                        
                        
                        if(tal>=al&&(tbl>=bl||bl==0))fin_hold.push_back(ini_hold[i]);
                        else if(tal<al&&bl==0){bl++; b[ini_hold[i]]=1;}
                        else if(tal>=al){al++;a[ini_hold[i]]=1;}
                        else if(tbl>=bl){bl++;b[ini_hold[i]]=1;}
                        else if(tbl<bl&&tal<al){flg=1;break;}  
                        
                        
                        
                    }
 
                    fin_hold.swap(ini_hold);       
                    fin_hold.clear();  
                    prv1=prv2;
                    prv2=ini_hold.size();
                    }
                    if(flg==1){cout<<"NO";}
                    else cout<<"YES";
                    nl
        }
                      
    }
 
    return 0;
 
 
}*/
		if((n%2==1 && m<((n-1)*(n-1))/4) || (n%2==0 && m<((n*(n-2))/4)))
		{
			for(int i=0;i<m;i++)
			{
				int a,b; cin>>a>>b;
			}
			NO
			continue;
		}
 
 
 
 
for (int vinod = 0; vinod < 5; ++vinod)
    {
    	vinod+=0;
    }
    
 
		vector<int>s[n];
		int a,b;
		for(int j=0;j<m;j++)
		{
			 cin>>a>>b;
			
			s[a-1].push_back(b-1);
			s[b-1].push_back(a-1);
		}
		int container1[n]={0},container2[n]={0};
		int ginati1=0,ginati2=0;
		vector<int>:: iterator iter;
		int j=0,x,check=0,flag=0,out=0;
		int p=0,con=0;
		
		for (int vinod = 0; vinod < 5; ++vinod)
    {
    	vinod+=0;
    }
 
/*#include<bits/stdc++.h>
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
 
 
int main(int argc, char const *argv[])
{
  
    testcase
    {
        
        int n,m; cin>>n>>m;
        int flg=0;
        vector<int>v[n+1];
        vector<int> ini_hold;
     
        if(m>((n*(n-1))/2-2))
          {  for (int i = 1; i <= m; ++i)
                       {
                           int x,y; cin>>x>>y;
                           v[x].push_back(y);
                           v[y].push_back(x); 
                       } cout<<"YES";nl
          }
    
   else if(n==1 || n==2)
    {
      for(int i=0;i<m;i++)
      {
        int x,y;
        cin>>x>>y;
      }
      cout<<"YES"<<endl;
      continue;
    }
    
    
  else  if((n%2==1 && m<((n-1)*(n-1))/4) || (n%2==0 && m<((n*(n-2))/4)))
    {
      for(int i=0;i<m;i++)
      {
        int a,b;
      cin>>a>>b;
      }
      cout<<"NO"<<endl;
      continue;
    }
          
        else
        {
          for (int i = 1; i <= m; ++i)
                       {
                           int x,y; cin>>x>>y;
                           v[x].push_back(y);
                           v[y].push_back(x);
                       }
        
                 for (int i = 1; i <= n; ++i)
                       {
                           ini_hold.push_back(i);
                       }
                    
                map<int,int>a,b;         
                int al=0,bl=0;                
                vector<int>fin_hold;
                int prv1=INT_MIN,prv2=n;
                int q=0;                   
                while(ini_hold.size()!=0&&flg==0){
 
                    if(ini_hold.size()==n||prv2==prv1)
                    {   q=0;
                      a[ini_hold[0]]=1; al++;q++;}
                    
                    for (int i = q; i < ini_hold.size(); ++i)
                    {
                        int tal=0,tbl=0;
                        for (int j = 0; j < v[ini_hold[i]].size(); ++j)
                        {
                            if(a[v[ini_hold[i]][j]]==1)tal++;
                            if(b[v[ini_hold[i]][j]]==1)tbl++;
        
                        }
                        
                        
                        if(tal>=al&&(tbl>=bl||bl==0))fin_hold.push_back(ini_hold[i]);
                        else if(tal<al&&bl==0){bl++; b[ini_hold[i]]=1;}
                        else if(tal>=al){al++;a[ini_hold[i]]=1;}
                        else if(tbl>=bl){bl++;b[ini_hold[i]]=1;}
                        else if(tbl<bl&&tal<al){flg=1;break;}  
                        
                        
                        
                    }
 
                    fin_hold.swap(ini_hold);       
                    fin_hold.clear();  
                    prv1=prv2;
                    prv2=ini_hold.size();
                    }
                    if(flg==1){cout<<"NO";}
                    else cout<<"YES";
                    nl
        }
                      
    }
 
    return 0;
 
 
}*/
 
 
								for(int j=0;j<n;j++)
		{
if(s[j].empty())
{
p++;
if(p==1)
			{
container1[j]=1;
	ginati1++;
	}
else if(p>1)
			{
NO
				con=1;
break;
			}}
		}
 
 
/*#include<bits/stdc++.h>
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
 
 
int main(int argc, char const *argv[])
{
  
    testcase
    {
        
        int n,m; cin>>n>>m;
        int flg=0;
        vector<int>v[n+1];
        vector<int> ini_hold;
     
        if(m>((n*(n-1))/2-2))
          {  for (int i = 1; i <= m; ++i)
                       {
                           int x,y; cin>>x>>y;
                           v[x].push_back(y);
                           v[y].push_back(x); 
                       } cout<<"YES";nl
          }
    
   else if(n==1 || n==2)
    {
      for(int i=0;i<m;i++)
      {
        int x,y;
        cin>>x>>y;
      }
      cout<<"YES"<<endl;
      continue;
    }
    
    
  else  if((n%2==1 && m<((n-1)*(n-1))/4) || (n%2==0 && m<((n*(n-2))/4)))
    {
      for(int i=0;i<m;i++)
      {
        int a,b;
      cin>>a>>b;
      }
      cout<<"NO"<<endl;
      continue;
    }
          
        else
        {
          for (int i = 1; i <= m; ++i)
                       {
                           int x,y; cin>>x>>y;
                           v[x].push_back(y);
                           v[y].push_back(x);
                       }
        
                 for (int i = 1; i <= n; ++i)
                       {
                           ini_hold.push_back(i);
                       }
                    
                map<int,int>a,b;         
                int al=0,bl=0;                
                vector<int>fin_hold;
                int prv1=INT_MIN,prv2=n;
                int q=0;                   
                while(ini_hold.size()!=0&&flg==0){
 
                    if(ini_hold.size()==n||prv2==prv1)
                    {   q=0;
                      a[ini_hold[0]]=1; al++;q++;}
                    
                    for (int i = q; i < ini_hold.size(); ++i)
                    {
                        int tal=0,tbl=0;
                        for (int j = 0; j < v[ini_hold[i]].size(); ++j)
                        {
                            if(a[v[ini_hold[i]][j]]==1)tal++;
                            if(b[v[ini_hold[i]][j]]==1)tbl++;
        
                        }
                        
                        
                        if(tal>=al&&(tbl>=bl||bl==0))fin_hold.push_back(ini_hold[i]);
                        else if(tal<al&&bl==0){bl++; b[ini_hold[i]]=1;}
                        else if(tal>=al){al++;a[ini_hold[i]]=1;}
                        else if(tbl>=bl){bl++;b[ini_hold[i]]=1;}
                        else if(tbl<bl&&tal<al){flg=1;break;}  
                        
                        
                        
                    }
 
                    fin_hold.swap(ini_hold);       
                    fin_hold.clear();  
                    prv1=prv2;
                    prv2=ini_hold.size();
                    }
                    if(flg==1){cout<<"NO";}
                    else cout<<"YES";
                    nl
        }
                      
    }
 
    return 0;
 
 
}*/		
		for (int vinod = 0; vinod < 5; ++vinod)
    {
    	vinod+=0;
    }
 
 
		if(con==1)
		continue;
		
		while(true)
		{
			if((ginati1+ginati2)==n)
			{
				YES
				break;
			}
			
 
 
	for (int vinod = 0; vinod < 5; ++vinod)
    {
    	vinod+=0;
    }
 
 
 
 
 
/*#include<bits/stdc++.h>
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
 
int main(int argc, char const *argv[])
{
  
    testcase
    {
        
        int n,m; cin>>n>>m;
        int flg=0;
        vector<int>v[n+1];
        vector<int> ini_hold;
     
        if(m>((n*(n-1))/2-2))
          {  for (int i = 1; i <= m; ++i)
                       {
                           int x,y; cin>>x>>y;
                           v[x].push_back(y);
                           v[y].push_back(x); 
                       } cout<<"YES";nl
          }
    
   else if(n==1 || n==2)
    {
      for(int i=0;i<m;i++)
      {
        int x,y;
        cin>>x>>y;
      }
      cout<<"YES"<<endl;
      continue;
    }
    
    
  else  if((n%2==1 && m<((n-1)*(n-1))/4) || (n%2==0 && m<((n*(n-2))/4)))
    {
      for(int i=0;i<m;i++)
      {
        int a,b;
      cin>>a>>b;
      }
      cout<<"NO"<<endl;
      continue;
    }
          
        else
        {
          for (int i = 1; i <= m; ++i)
                       {
                           int x,y; cin>>x>>y;
                           v[x].push_back(y);
                           v[y].push_back(x);
                       }
        
                 for (int i = 1; i <= n; ++i)
                       {
                           ini_hold.push_back(i);
                       }
                    
                map<int,int>a,b;         
                int al=0,bl=0;                
                vector<int>fin_hold;
                int prv1=INT_MIN,prv2=n;
                int q=0;                   
                while(ini_hold.size()!=0&&flg==0){
 
                    if(ini_hold.size()==n||prv2==prv1)
                    {   q=0;
                      a[ini_hold[0]]=1; al++;q++;}
                    
                    for (int i = q; i < ini_hold.size(); ++i)
                    {
                        int tal=0,tbl=0;
                        for (int j = 0; j < v[ini_hold[i]].size(); ++j)
                        {
                            if(a[v[ini_hold[i]][j]]==1)tal++;
                            if(b[v[ini_hold[i]][j]]==1)tbl++;
        
                        }
                        
                        
                        if(tal>=al&&(tbl>=bl||bl==0))fin_hold.push_back(ini_hold[i]);
                        else if(tal<al&&bl==0){bl++; b[ini_hold[i]]=1;}
                        else if(tal>=al){al++;a[ini_hold[i]]=1;}
                        else if(tbl>=bl){bl++;b[ini_hold[i]]=1;}
                        else if(tbl<bl&&tal<al){flg=1;break;}  
                        
                        
                        
                    }
 
                    fin_hold.swap(ini_hold);       
                    fin_hold.clear();  
                    prv1=prv2;
                    prv2=ini_hold.size();
                    }
                    if(flg==1){cout<<"NO";}
                    else cout<<"YES";
                    nl
        }
                      
    }
 
    return 0;
 
 
}*/
 
 
			if(check==(ginati1+ginati2))
			flag=1;
			else
			check = ginati1+ginati2;
			for(j=0;j<n;j++)
			{
				if(!s[j].empty())   //check
				{
 
/*#include<bits/stdc++.h>
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
 
int main(int argc, char const *argv[])
{
  
    testcase
    {
        
        int n,m; cin>>n>>m;
        int flg=0;
        vector<int>v[n+1];
        vector<int> ini_hold;
     
        if(m>((n*(n-1))/2-2))
          {  for (int i = 1; i <= m; ++i)
                       {
                           int x,y; cin>>x>>y;
                           v[x].push_back(y);
                           v[y].push_back(x); 
                       } cout<<"YES";nl
          }
    
   else if(n==1 || n==2)
    {
      for(int i=0;i<m;i++)
      {
        int x,y;
        cin>>x>>y;
      }
      cout<<"YES"<<endl;
      continue;
    }
    
    
  else  if((n%2==1 && m<((n-1)*(n-1))/4) || (n%2==0 && m<((n*(n-2))/4)))
    {
      for(int i=0;i<m;i++)
      {
        int a,b;
      cin>>a>>b;
      }
      cout<<"NO"<<endl;
      continue;
    }
          
        else
        {
          for (int i = 1; i <= m; ++i)
                       {
                           int x,y; cin>>x>>y;
                           v[x].push_back(y);
                           v[y].push_back(x);
                       }
        
                 for (int i = 1; i <= n; ++i)
                       {
                           ini_hold.push_back(i);
                       }
                    
                map<int,int>a,b;         
                int al=0,bl=0;                
                vector<int>fin_hold;
                int prv1=INT_MIN,prv2=n;
                int q=0;                   
                while(ini_hold.size()!=0&&flg==0){
 
                    if(ini_hold.size()==n||prv2==prv1)
                    {   q=0;
                      a[ini_hold[0]]=1; al++;q++;}
                    
                    for (int i = q; i < ini_hold.size(); ++i)
                    {
                        int tal=0,tbl=0;
                        for (int j = 0; j < v[ini_hold[i]].size(); ++j)
                        {
                            if(a[v[ini_hold[i]][j]]==1)tal++;
                            if(b[v[ini_hold[i]][j]]==1)tbl++;
        
                        }
                        
                        
                        if(tal>=al&&(tbl>=bl||bl==0))fin_hold.push_back(ini_hold[i]);
                        else if(tal<al&&bl==0){bl++; b[ini_hold[i]]=1;}
                        else if(tal>=al){al++;a[ini_hold[i]]=1;}
                        else if(tbl>=bl){bl++;b[ini_hold[i]]=1;}
                        else if(tbl<bl&&tal<al){flg=1;break;}  
                        
                        
                        
                    }
 
                    fin_hold.swap(ini_hold);       
                    fin_hold.clear();  
                    prv1=prv2;
                    prv2=ini_hold.size();
                    }
                    if(flg==1){cout<<"NO";}
                    else cout<<"YES";
                    nl
        }
                      
    }
 
    return 0;
 
 
}*/
					int asthai1=0,asthai2=0;
	for(iter = s[j].begin(); iter!=s[j].end(); iter++)
					if(asthai1!=ginati1 || asthai2!=ginati2)
		{
if(asthai1!=ginati1 && container1[*iter]==1)
		asthai1++;
if(asthai2!=ginati2 && container2[*iter]==1)
						asthai2++;
					}	
 
 
 
					
	for (int vinod = 0; vinod < 5; ++vinod)
    {
    	vinod+=0;
    }
 
 
 
 
					if(asthai1==ginati1 && asthai2 == ginati2)
					{
					
						if(flag==1)
						{
							container1[j]=1;
							s[j].clear();
							ginati1++;
							flag=0;	
						}
					}
 
	/*for (int vinod = 0; vinod < 5; ++vinod)
    {
    	vinod+=0;
    }*/
 
else if(asthai1!=ginati1 && asthai2!=ginati2)
	{
	NO
out=1;
		break;
}
	/*for (int vinod = 0; vinod < 5; ++vinod)
    {
    	vinod+=0;
    }*/
 
 
 
 
 
 
 
 
 
 
 
else if(asthai1!=ginati1)
			{
	container2[j]=1;
s[j].clear();
	ginati2++;
}
	/*	
	for (int vinod = 0; vinod < 5; ++vinod)
    {
    	vinod+=0;
    }*/
 
 
 
 
else if(asthai2!=ginati2)
{
container1[j]=1;
s[j].clear();
ginati1++;           //check
		}
	}	
}
if(out==1)
break;
}	
	}
return 0;
}
 
