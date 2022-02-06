/*
Given an array of n distinct elements. Find the minimum number of swaps required to sort the array in strictly increasing order.


Example 1:

Input:
nums = {2, 8, 5, 4}
Output:
1
Explaination:
swap 8 with 4.
*/

class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
    /*
    this can take O(n*n) TC
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<pair<int,int>> v;
	    int n = nums.size();
	    
	    for(int i=0;i<n;i++) v.push_back({nums[i],i});
	    // array being sorted with respect to values
	    sort(v.begin(),v.end());
	    int res=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(i == v[i].second) continue;
	        else{
	            swap(v[i],v[v[i].second]);
	            res++;
	             i--;
	        }
	    }
	    return res;
	    
	}
	*/
	int minSwaps(vector<int>&nums)
	{
	    map<int,int> mp;
	    int n= nums.size();
	    int res=0, i=0;
	    for(int i=0;i<n;i++) mp[nums[i]]=i;
	  
	    for(auto it = mp.begin();it!=mp.end();it++){
	        if(nums[i] != it->first){
	            swap(nums[i],nums[it->second]);
	            mp[nums[it->second]] = it->second;
	            res++;
	        }
	        i++;
	    }
	    return res;
	    
	}
};