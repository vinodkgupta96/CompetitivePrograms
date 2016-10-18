vector<int> Solution::plusOne(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
  //int n; cin>>n;
   int carry=1,sum=0;
  for (int i = A.size()-1; i >=0; --i)
  {
    sum=(A[i]+carry)%10;
    carry=(A[i]+carry)/10;
    A[i]=sum;
  }

 if(carry!=0) {A.insert(A.begin(),carry);}  
 while(A[0]==0){A.erase(A.begin());}
 
 
 return A;
 
}
