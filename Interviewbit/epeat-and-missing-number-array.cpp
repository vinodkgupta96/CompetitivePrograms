vector<int> Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    
long long _n,_nsq,_s=0,_sq=0,_n_s,_s_d_n,_x,_y;

    long long n= (long long )A.size();

    _n=(long long )(n*(n+1)/2);
    _nsq=(long long )(n)*(n+1)*(2*n +1)/6;

    for(long long i=0;i<n;i++){_s+=(long long )A[i];_sq+=((long long )A[i]*(long long )A[i]);}
     
    
        
    long long x_y=_n-_s;
    long long xPy=(long long )(_nsq-_sq)/(long long )x_y;
    _x=(long long )(x_y+xPy)/2;
    _y=(long long )(-x_y+xPy)/2;
    int x=(int)_x,y=(int)_y;
    vector<int>vec;
    vec.push_back(y);
    vec.push_back(x);
    return vec;
    
    
    
    
}
