class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>> res;
      
        if(nums.empty()){
            return res;
        }
         int n = nums.size();
        //sorting as it make the smallest point to left.
        sort(nums.begin(),nums.end());
        //first pointer
        for(int i=0;i<n;i++)
        {
            //second ptr
            for(int j=i+1;j<n;j++)
            {
                int t_2 = target - nums[j] - nums[i];
                //thrid pointer 
                int left = j+1;
                //fourth ptr
                int right = n-1;
                
                while(left<right)
                {
                    //from here we will solve it as a two sum prob
                    int two_sum = nums[left]+ nums[right];
                    
                    if(two_sum < t_2)
                    {
                        left++;
                    }
                    else if(two_sum > t_2)
                    {
                        right--;
                    }
                    else
                    {
                        //by this it means that two_sum == t_2 and we got it
                        
                        vector<int> q(4,0);
                        q[0] = nums[i];
                        q[1] = nums[j];
                        q[2] = nums[left];
                        q[3] = nums[right];
                        
                        res.push_back(q);
                        
                        //for skipping duplicates
                        while(left<right && nums[left] == q[2])
                        {
                            ++left;
                        }
                        
                        while(left<right && nums[right] == q[3]){
                            --right;
                        }
                        
                        
                    }
                }
                //for skipping duplicates
                while(j+1 < n && nums[j+1] == nums[j]) {
                    ++j;
                }
            }
            while(i+1 < n && nums[i+1] == nums[i]){
                ++i;
            }

        }
        return res;
          
    }
};

//brute force
/*
Firstly sort the array then We will use three pointer and then use binary search (target -(a+b+c)) and then store the value in hash set and return it .
Time - N3*LogN Space - O(1)
*/
//optimal sol
/*
We will use 4 four pointer !
Time - O(N3) Space- O(1)
*/