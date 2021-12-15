/*
Given an integer n, return the number of prime numbers that are strictly less than n.

Example 1:
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
*/

class Solution {
public:
    int countPrimes(int n) {
        if(n ==0 or n ==1) return 0;
        vector<bool> prime(n,true);
        prime[0]= prime[1] = false;
        
        for(int i=0;i< sqrt(n);i++){
            if(prime[i]==true){
                for(int j = i*i;j<n;j+=i){
                    prime[j] = false;
                }
            }
        }
        return count(prime.begin(),prime.end(),true);
    }
};