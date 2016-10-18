vector<int> Solution::flip(string A) {
    
  //   string A; cin>>A;   
int n=A.length();
int arr[n];
arr[0]=(A[0]=='0'?0:1);
int total_1=0;
for (int i = 1; i < n; ++i)
{
    arr[i]=arr[i-1]+(A[i]=='0'?0:1);
    total_1+=(A[i]=='0'?0:1);
}

int max=0,_l=0,_r;
int l=0,r=0;
int Zro=0,ones=0;
for (int i = 0; i < n; ++i)
{
    if(A[i]=='1')ones++;
    else if(A[i]=='0')Zro++;
    while(l<i&&(ones>Zro||ones>=Zro&&A[i]=='0')){A[l]=='0'?Zro--:ones--;l++;}
   // cout<<max<<endl;
    if(Zro-ones>max)
        { _l=l;_r=i; max=Zro-ones;}
}

if(max==0) {vector<int> _no;return _no; /*cout<<"none";*/}
else {vector<int> _no;_no.push_back(_l+1);_no.push_back(_r+1); /*cout<<_l+1<<" "<<_r+1;*/ return _no;}

    
}
