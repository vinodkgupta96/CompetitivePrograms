vector<int> Solution::getRow(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<int> vec;
    vec.push_back(1);
    for(int i=1;i<=A;i++)
    {
        vec.push_back(vec[i-1]*(A-i+1)/i);
    }
    return vec;
}
