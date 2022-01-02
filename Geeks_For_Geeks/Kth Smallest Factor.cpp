/*
GIven two positive integers N and K. You have to find the Kth smallest factor of N. 
A factor of N is a positive integer which divides N. Output the Kth smallest factor of
 N if it exists otherwise print -1.

Example 1:

Input : N = 4 , K = 2
Output: 2
Explanation:
All factors of 4 are 1,2 and 4. Out of
these 2 is the 2nd smallest.
*/

int kThSmallestFactor(int N , int K) {
        // code here
        int count_fact =0;
        for(int i=1;i<=N;i++)
        {
            if(N%i == 0) count_fact++;
            if(K == count_fact) return  i;
        }
        return -1;
    }