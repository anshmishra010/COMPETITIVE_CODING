/*
Given an integer N, find its factorial.

Example 1:

Input: N = 5
Output: 120
Explanation : 5! = 1*2*3*4*5 = 120

*/

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        // we can also use linked list to store the data
        
        vector<int> res;
        res.push_back(1);
        
        for(auto i = 2;i<=N;i++){
            int carry =0;
            for(auto j=0;j<res.size();j++){
                int cal = (res[j]*i)+carry;
                res[j] = cal%10; // we will store remainder
                carry = cal/10; // we will store the qoutient
            }
            while(carry)
            {
                res.push_back(carry%10);
                carry = carry/10;
            }
            
            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};