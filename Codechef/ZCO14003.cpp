// Example program
 
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
 
int main()
{
    
    long long N; cin>>N;
    vector<long long> vec(N);
    for(int i=0;i<N;i++)cin>>vec[i];
    sort(vec.begin(),vec.end());
    long long sum =0;
    for(int i=0;i<N;i++)
    {
      sum = sum > vec[i]*(N-i) ? sum : vec[i]*(N-i);
    }
    cout<<sum;
    return 0;
}
