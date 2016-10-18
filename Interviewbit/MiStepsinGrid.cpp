struct xy{
      int x,y;
    };
    
    bool comp(const xy o1,const xy o2){
      return (o1.x < o2.x);
    }
    
int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    
    
   
    vector<xy>arr;
    for (int i = 0; i < X.size(); ++i)
    {
      xy temp;
      temp.x=X[i];temp.y=Y[i];
      arr.push_back(temp);
    }

  //  sort(arr.begin(),arr.end(),comp);
    int ans=0;
    for (int i = 1; i < X.size(); ++i)
    {
      int _x,_y;
      _x=abs(arr[i].x-arr[i-1].x);
      _y=abs(arr[i].y-arr[i-1].y);
        
      ans+=max(_x,_y);
      //cout<<max(_x,_y)<<endl;
    }

    for (int i = 0; i < X.size(); ++i)
    {
    //  cout<<arr[i].x<<" "<<arr[i].y<<endl;
    }

    return ans;
    
}
