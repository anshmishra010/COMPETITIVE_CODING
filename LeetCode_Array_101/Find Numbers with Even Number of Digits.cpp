class Solution {
public:
    int findNumbers(vector<int>& nums)
    {
        int result=0;
        for(auto r: nums)
        {
            if(to_string(r).size()%2==0)
            {
                result++;
            }
        }
        return result;
    }
};