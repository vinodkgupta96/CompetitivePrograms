#include <bits/stdc++.h>
using namespace std;
 
int main()
{     
    
   int T; cin>>T;
   int marks[6];
 
   
 
   while(T--)
   {
 
    for (int i = 1; i < 6; ++i)
   {
       marks[i]=0;
   }    
     int subj; cin>>subj;
     double avg=0;
    for (int i = 1; i <= subj; ++i)
    {
        int temp; cin>>temp;
        marks[temp]++;
        avg+=temp;
    }
    avg= avg/(double) subj;
    
    (marks[2]==0 && marks[5] >=1 && avg >=4?cout<<"Yes":cout<<"No");
    cout<<endl;
   }
 
 
return 0;
}
