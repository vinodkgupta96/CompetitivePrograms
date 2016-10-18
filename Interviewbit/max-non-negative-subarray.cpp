vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
 vector<int>_max,_current;
    long long _maxs=0,_currs=0;
    
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<0)
          {
            if(_maxs<_currs)
                _max=_current;
            else if(_maxs==_currs&&_max.size()<_current.size())
                _max=_current;
            _maxs=max(_maxs,_currs); _current.clear();
            _currs=0;
            }
            
        else{_current.push_back(A[i]);_currs+=A[i];}
        
        
        
    }
            if(_maxs<_currs)
                _max=_current;
            else if(_maxs==_currs&&_max.size()<_current.size())
                _max=_current;
            
    return _max;
 
    
}
