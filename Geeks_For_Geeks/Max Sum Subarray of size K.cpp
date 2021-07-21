/*
Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.
Example 1:
Input:
N = 4, K = 2
Arr = [100, 200, 300, 400]
Output:
700
Explanation:
Arr3  + Arr4 =700,
which is maximum.
*/
 int maximumSumSubarray(int K, vector<int> &Arr , int N){
        /*
               SLIDING WINDOW
        int start =0, end = 0;
        int msum = INT_MIN;
        int sum=0;
        while(end<N)
        {
            if(end - start +1 < K){
                 sum += Arr[end];
                 end++;
            }
            else if(end - start +1 == K){
                sum += Arr[end];
                msum = max(msum,sum);
                sum = sum - Arr[start];
                start++;
                end++;
            }
        }
        return msum;
        */
        
        
        /*
         prefix sum
        for(int i =1;i<N;i++){
            Arr[i] += Arr[i-1];
        }
        int msum = Arr[K-1];
        for(int i =K;i<N;i++){
            msum = max(msum,Arr[i]-Arr[i-K]);
        }
        return msum;
        */
}