#include<bits/stdc++.h>
using namespace std;
#define VINOD 1 
#define MANOJ 2
#define VINO 1 
#define MANO 2
 
map<int,bool>map2;
map<int,int>map4;
 
inline void read(int *y)
{
	int x=*y;
	register char d = getchar();
	x = 0;
	for(; (d<48)||(d>57);d = getchar());
	for(; (d>47)&&(d<58);d = getchar())
	x = (int)((((x)<<1) + ((x)<<3)) + d - 48);
	*y=x;
}
/*
				Chef cooks nice receipes in the cafeteria of his company. The cafe contains N boxes with food enumerated from 1 to N and are placed 
				in a circle in clocwise order (boxes 1 and N are adjacent).
				 Each box has unlimited amount of food with a tastyness level of Ai. Chef invented a definition of a magic box!
				*/
 
int main()
{
int T;
int vk,saket,pawan,shiva,vi;
	cin>>T;
while(T--)
{
		int n,count=0;
cin>>n;
	int a[n];
	int chk[n]={0};
	map4.clear();
	for(int i=0;i<n;i++)
		{
			
	read(&a[i]);
	a[i] = a[i]%n;
		map4[i] = (i+a[i]+1)%n;
		}
/*
				Chef cooks nice receipes in the cafeteria of his company. The cafe contains N boxes with food enumerated from 1 to N and are placed 
				in a circle in clocwise order (boxes 1 and N are adjacent).
				 Each box has unlimited amount of food with a tastyness level of Ai. Chef invented a definition of a magic box!
 
				*/
 
 
 
	for(int j=0;j<n;j++)
		{
			if(chk[j]==0)
		{
		map2.clear();
	int temp = j;		int i = j;
	queue<int>house;
	
			while(1)
		{
 
/*
				Chef cooks nice receipes in the cafeteria of his company. The cafe contains N boxes with food enumerated from 1 to N and are placed 
				in a circle in clocwise order (boxes 1 and N are adjacent).
				 Each box has unlimited amount of food with a tastyness level of Ai. Chef invented a definition of a magic box!
 
				*/
			
		if(chk[i]==2)
		{
			while(!house.empty())
			{
				chk[house.front()]=2;
				house.pop(); 
					}
				break;
		}
	
/*
				Chef cooks nice receipes in the cafeteria of his company. The cafe contains N boxes with food enumerated from 1 to N and are placed 
				in a circle in clocwise order (boxes 1 and N are adjacent).
				 Each box has unlimited amount of food with a tastyness level of Ai. Chef invented a definition of a magic box!
 
				*/
 
 
				else if(map2[i]==1)
			{
					while(house.front()!=i)
				{
					chk[house.front()]=2;
					house.pop();
				}				while(!house.empty())
			{
						chk[house.front()]=1;
				house.pop();
						count++;	
			}
					break;
	}
	
				/*
				Chef cooks nice receipes in the cafeteria of his company. The cafe contains N boxes with food enumerated from 1 to N and are placed 
				in a circle in clocwise order (boxes 1 and N are adjacent).
				 Each box has unlimited amount of food with a tastyness level of Ai. Chef invented a definition of a magic box!
 
				*/
	else if(chk[i]==1)
	{
		while(!house.empty())
		{
			chk[house.front()]=2;
			house.pop();
		}
		break;
	}
				
/*
				Chef cooks nice receipes in the cafeteria of his company. The cafe contains N boxes with food enumerated from 1 to N and are placed 
				in a circle in clocwise order (boxes 1 and N are adjacent).
				 Each box has unlimited amount of food with a tastyness level of Ai. Chef invented a definition of a magic box!
 
				*/
 
				else
				{
					map2[i]=1;
					house.push(i);
					i=map4[i];
				}
			}
			}
		}
 
/*
				Chef cooks nice receipes in the cafeteria of his company. The cafe contains N boxes with food enumerated from 1 to N and are placed 
				in a circle in clocwise order (boxes 1 and N are adjacent).
				 Each box has unlimited amount of food with a tastyness level of Ai. Chef invented a definition of a magic box!
 
				*/
 
/*
				Chef cooks nice receipes in the cafeteria of his company. The cafe contains N boxes with food enumerated from 1 to N and are placed 
				in a circle in clocwise order (boxes 1 and N are adjacent).
				 Each box has unlimited amount of food with a tastyness level of Ai. Chef invented a definition of a magic box!
 
				*/
 
	
	cout<<count<<endl;
	}
}
