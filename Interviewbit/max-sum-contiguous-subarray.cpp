int Solution::maxSubArray(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int _currsm=A[0],_maxsm=A[0];
  for (int i = 1; i < A.size(); ++i)
  {
    _currsm=max(A[i],A[i]+_currsm);
    _maxsm=max(_currsm,_maxsm);
  }
  return _maxsm;
    
}
