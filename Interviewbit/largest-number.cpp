int comp(int n1,int n2)
{
  string s1=to_string(n1),s2=to_string(n2);
  string left,right;
  left=s1+s2;
  right=s2+s1;
  return (left.compare(right)>0?1:0);
}


string Solution::largestNumber(const vector<int> &_A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    // vector<int>A={3,30,34,5,9,99,0};
    vector<int>A;
    for(int i=0;i<_A.size();i++)A.push_back(_A[i]);
  sort(A.begin(),A.end(),comp);
  string str;
  for (int i = 0; i < A.size(); ++i)
  {
    str+=to_string(A[i]);
  }
if(str[0]=='0'){string str3="0"; return str3;}
 return str;
 
}
