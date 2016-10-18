void swap(int*x,int* y)
{
    int tmp; tmp=*y;
    *y=*x;*x=tmp;
}

int Solution::firstMissingPositive(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
     int i=0,n=A.size(),j;
    j=n-1;

if(n==1)
{if(A[0]<=0||A[0]>1)return 1;
 else if(A[0]==1)return 2;        
}
	while(i<j)
    {
        
        if(A[i]>0)i++;
        else if(A[j]<=0)j--;
        else if(A[i]<=0&&A[j]>0){swap(&A[i],&A[j]);i++;j--;}
    }

    /*for (int i = 0; i < n; ++i)
    {
    	cout<<A[i]<<" ";
    }
    */
    int neg=-1;
    for ( i = 0; i < n; ++i)
    {
    	if(A[i]<=0){neg=i-1; break;}
    }
    if(neg<0)neg=n-1;
    for (int i = 0; i<=neg; ++i)
    {	
    	if(abs(A[i])<n){A[abs(A[i])]=abs(A[abs(A[i])])*-1;}
    	//else if(A[i]<n){ A[A[i]]=abs(A[A[i]])*-1;}
    }
    int count=0;
    for (int i = 1; i<n&&i <= neg; ++i)
     {
     	if(A[i]>0){return i;}

     } 

     return (n+1);
}
