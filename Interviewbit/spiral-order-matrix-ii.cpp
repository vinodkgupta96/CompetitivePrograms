vector<vector<int> > Solution::generateMatrix(int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
      
int m=n;
vector<int>vd(m);
vector<vector<int >>A(m,vd);

int temp=m; m=n;n=temp;
int k=0,j=0;
int num=1;
while(m>0&&n>0){

  for (int i = 0; i < m; ++i)
  {
     A[k][j]=num;  num++;j++; 
  }
  j--;
  n--;
  k++;
  for (int i = 0; i < n; ++i)
  {
    A[k][j]=num;  num++; k++;
  }
  k--;
  m--;
  j--;
  for (int i = 0; i < m; ++i)
  {
    A[k][j]=num;  num++; j--;
  }
  j++;
  n--;
  k--;
  for (int i = 0; i < n; ++i)
  {
    A[k][j]=num;  num++; k--;
  }
  k++;
  m--;
  j++;
}
return A;

}
