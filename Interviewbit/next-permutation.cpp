void swap(int *a,int *b){
  int temp=*a;
  *a=*b;*b=temp;

}
void Solution::nextPermutation(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
if(n==1||n==0)return;
int d=-2;
//int min=n-1;
for (int i = n-2; i >=0; --i)
{
   if(A[i]<A[i+1]){d=i+1;break;}
}



if(d==-2){sort(A.begin(),A.end());}
int mi=d;
for(int i=d+1;i<n;i++){ if(A[i]>A[d-1])mi=min(A[mi],A[i]);}

     swap(&A[mi],&A[d-1]); 
     
      //swap(&A[d],&A[d-1]);
    sort(A.begin()+d,A.end());
  
  
    
    
}
