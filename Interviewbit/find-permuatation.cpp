vector<int> Solution::findPerm(const string A, int B) {

vector<int>_v(A.length()+1);

int n=1;
for (int i = 0; i < A.length(); ++i)
{
    if(A[i]=='I'){_v[i]=n; n++;}

}

_v[A.length()]=n; n++;

for (int i = A.length()-1; i >=0; --i)
{
    if(A[i]=='D'){_v[i]=n; n++;}
}


return _v;
        
    
}

