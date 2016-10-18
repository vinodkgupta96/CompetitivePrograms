void swap(int *a,int *b){
  int temp=*a;
  *a=*b;*b=temp;

}


void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    int n=A.size();

/*for (int i = 0; i < n; ++i)
{
  for (int j = 0; j < n; ++j)
  {
    cin>>A[i][j];
  }
}
*///int i=0,j=0;

int m=n;

for (int k = 0; k < (n/2 + n%2); ++k)
{
  
  int i=k,j=k;
  m--;
  for (; j < m; ++j)
   {
    int t1=A[i][j];
     for (int p = 0; p < 4; ++p)
     {
       int t2; t2=A[j][n-i-1];
       A[j][n-i-1]=t1;
       swap(&t1,&t2);
       int tem=j;
       j=n-i-1; i=tem;
     // cout<<i<<" "<<j<<endl; 
     }
   } 

}

/*

for (int i = 0; i <n; ++i)
{
  for (int j = 0; j <n; ++j)
  {
    cout<<A[i][j]<<" ";
  }
  cout<<endl;
}
*/
}
