#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    
    int N,Q; cin>>N>>Q;
    long NArr[100000],min,max;
    cin>>NArr[0];
    min = NArr[0],max = NArr[0];
    for (int i = 1; i < N; ++i)
    {
        cin>>NArr[i];
        min = min > NArr[i] ? NArr[i] : min;
        max = max < NArr[i] ? NArr[i] : max;
    }
    while(Q--){
        long query; cin>>query;
        if(query<=max && query >=min)
            cout<<"Yes";
        else
            cout<<"No";
        cout<<endl;
    }
 
    return 0;
} 
