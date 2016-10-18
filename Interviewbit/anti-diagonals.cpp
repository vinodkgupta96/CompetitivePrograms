vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {

        int n;  n =A.size();
        //cin>>n;
      
       vector<int> vd;
    vector<vector<int> >_v(2*n-1,vd);
   /* for (int i = 0; i < n; ++i)
       {
        for (int  j= 0; j < n; ++j)
        {
            int temp; cin>>temp;
            
            A[i].push_back(temp);
        }
       }*/   

    int count=n;
    for (int i = 0; i < count; ++i)
    {   int j=i,k=0;    
        
        while(j>=0&&k<count)
            {_v[i].push_back(A[k][j]);j--;k++;}
    }

    for (int j = 1; j < count; ++j)
    {
        int i=count-1,k=j;
        while(k<count && i>=0){_v[count+j-1].push_back(A[k][i]); /*cout<<A[k][i]<<" ";*/i--;k++; }
       // cout<<endl;
    }

/*   for (int i = 0; i < 2*count-1; ++i)
        {
            for (int j = 0; j < _v[i].size(); ++j)
            {
                cout<<_v[i][j]<<" ";
            }
            cout<<endl;
        }    
*/
return _v;
    
    
}
