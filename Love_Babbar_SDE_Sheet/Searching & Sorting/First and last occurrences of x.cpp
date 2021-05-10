vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> res;
    
    //we can soleve this problem by using binary search and some inbuilt method in stl too.
    //so we will be using stl method
    
    auto l = lower_bound(arr,arr+n,x);
    auto u = upper_bound(arr,arr+n,x);
    
    if(*l == x){
        res.push_back(l-arr); // to get the index value 
        res.push_back(u-arr-1); // as it gives one value ahead
    }
    else
    {
        res.push_back(-1);
        res.push_back(-1);
    }
    return res;
}