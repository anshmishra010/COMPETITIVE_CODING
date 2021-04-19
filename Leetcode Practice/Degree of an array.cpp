class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
       
        // tt stores the occurence of a number
        // st stores the starting index of a num
        // ed stores the end index of num
        map<int,int> tt;
        map<int,int> st;
        map<int,int> ed;
        int len  = nums.size();
         int maxi = 0;
        
        //if we are getting num first time
        for(int i=0;i<len;i++){
            if(tt[nums[i]] == 0){
                st[nums[i]] = i;
                ed[nums[i]] = i;
            }
            else {
                ed[nums[i]]=i;
            }
            tt[nums[i]]++;
            //storing maximum occurence of a num
            maxi = max(maxi,tt[nums[i]]);
        }
        
        int ans = INT_MAX;
        for(auto it : tt){
            if(it.second ==maxi){
                //formula =  end-start+1
                ans = min(ans,ed[it.first]-st[it.first]+1);
            }
        }
        return ans;
        
        
    }
};