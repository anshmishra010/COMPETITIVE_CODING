/*
You will be given an array A of N non-negative integers. Your task is to find the rightmost non-zero digit in the product of array elements.


Example 1:

Input:
N = 4, A = {3, 23, 30, 45}
Output:
5
Explanation:
Product of these numbers 
are 93150.Rightmost 
non-zero digit is 5.
*/

class Solution{   
  public:
    int rightmostNonZeroDigit(int N, int A[]){
        // code here 
        // here the main logic is we have to discard trailing zero, by ignoring 5,2 as 5*2 =10
        int cnt_5 =0;
        for(int i=0;i<N;i++){
            while(A[i] >0 and A[i] %5==0){
                // dividing the array with 5;
                A[i] = A[i]/5;
                // taking count of number divi by 5
                cnt_5++;
            }
        }
        for(int j=0;j<N;j++)
        {
            while(cnt_5 and A[j] >0 and A[j] % 2 ==0)
            {
                // divi by 2
                A[j] =A[j]/2;
                // by this stage we get pair of 5,2; So we decrement 5;
                cnt_5--;
            }
        }
        
        long long int ans =1;
        for(int i=0;i<N;i++)
        {
            // as we don't want to store whole, we are interested in right most
            ans = (ans * A[i]%10)%10;
        }
        // if by chance we didn't got any pair,
        if(cnt_5 > 0)
        {
            ans = (ans*5)%10;
        }
        if(ans){
            return ans;
        }
        
        return -1;
    }
};