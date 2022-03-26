/*
Given an array Arr of size N and a positive integer K, find the sub-array of length K 
with the maximum average.
Example 1:

Input:
K = 4, N = 6
Arr[] = {1, 12, -5, -6, 50, 3}
Output: 12 -5 -6 50
Explanation: Maximum average is 
(12 - 5 - 6 + 50)/4 = 51/4.
*/

    int findMaxAverage(int arr[], int n, int k) {
        // code here
        //sliding window
        int sum = 0;
        for(int i=0;i<k;i++)
        {
            sum += arr[i];
        }
        int cur_sum = sum, idx=0;
        for(int i=k;i<n;i++)
        {
            cur_sum += arr[i];
            cur_sum -= arr[i-k];
            if(cur_sum > sum)
            {
                sum = cur_sum;
                idx = i-k+1;
            }
        }
        return idx;
    }