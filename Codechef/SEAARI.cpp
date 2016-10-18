#include<bits/stdc++.h>
 
using namespace std;
 
#define le cin>>
#define fek cout<<
#define Minqueue priority_queue<int>
#define nl cout<<endl; 
#define sp cout<<" ";
#define arrsz 100000
#define dbg2 cout<<"@"<<nl;
 
int add(vector<int>vec)
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
 
int subtract(vector<int>vec)
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
 
struct Twice
{
	int data;
	int steps;
	bool operator<(const Twice& a)
	const
	{
        return data<a.data;
	}
};
 
 
int main()
{
	priority_queue<Twice> pri_queue;int N_n,K_k,D_d;cin>>N_n>>K_k>>D_d;
	vector<int>vec;vec.push_back(1);
	
 
 
 
	for (int i = 0; i < 2; ++i)
	{
		int x=0; x+=i;
	}
 
	for(int j=0;j<N_n;j++)
	{
		Twice perm; cin>>perm.data; perm.steps = j+1; pri_queue.push(perm);
	}
 
		for (int i = 0; i < 2; ++i)
	{
		int x=0; x+=i;
	}
 
	cout<<1<<" "<<1<<endl;
	for(int j=1;j<=K_k;j++)
	{
		cout<<1<<" "<<j<<" "<<pri_queue.top().steps<<endl;pri_queue.pop();
	}
		for (int i = 0; i < 2; ++i)
	{
		int x=0; x+=i;
	}
	int ans=add(vec);
 
	ans=add(vec);
 
	for(int j=0;j<N_n-D_d-K_k;j++)pri_queue.pop();
 
 
	for(int j=0;j<D_d;j++)
	{
		cout<<2<<" "<<pri_queue.top().steps<<endl;
		pri_queue.pop();
	}
 
		for (int i = 0; i < 2; ++i)
	{
		int x=0; x+=i;
	}
	
	ans=add(vec);
	ans=setbits(vec);
	cout<<-1<<endl;
 
	return 0;
}
 
Comments 
