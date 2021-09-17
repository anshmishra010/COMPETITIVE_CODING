/*
Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. The task is to find the element that would be at the k’th position of the final sorted array.
 

Example 1:

Input:
arr1[] = {2, 3, 6, 7, 9}
arr2[] = {1, 4, 8, 10}
k = 5
Output:
6
Explanation:
The final sorted array would be -
1, 2, 3, 4, 6, 7, 8, 9, 10
The 5th element of this array is 6.
*/

Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        // brute force 1 = we can use maxheap and then just print out the kth ele
        /*
        // brute force 2, TC - O(n+m), SC - O(1)
        int ptr1 = 0, ptr2=0;
        int check =0;
        while(ptr1 <n and ptr2 < m)
        {
            if(arr1[ptr1] < arr2[ptr2]){
                check++;
                if(check == k) return arr1[ptr1];
                ptr1++;
            }
            else{
                check++;
                if(check == k) return arr2[ptr2];
                ptr2++;
            }
        }
        while(ptr1 <n){
            check++;
            if(check == k) return arr1[ptr1];
            ptr1++;
        }
        while(ptr2 < m){
            check++;
            if(check == k) return arr2[ptr2];
            ptr2++;
        }
        return 1;
        */
        
        //optimal approach is, TC - O(log(min(n,m)) , SC - O(1);
        
        // as we want the smaller array to be first one, to reduce the TC
        if(n>m) return kthElement(arr2,arr1,m,n,k);
        
        // to tackle the edge case
        // as in if we get the k smaller or greater than the arr1.
        int low = max(0,k-m), high = min(k,n);
        
        // applying BS
        while(low <= high)
        {
            // cut will be the portion which we will be taking in individual array
            int cutOfArray1 = low + (high - low)/2; // it can be called mid too
            int  cutOfArray2= k - cutOfArray1;
            
            //taking from left portion
            int largestEleOfCutArray1 = cutOfArray1 == 0 ? INT_MIN : arr1[cutOfArray1-1];
            int largestEleOfCutArray2 = cutOfArray2 == 0 ? INT_MIN : arr2[cutOfArray2 -1];
            
            // taking from the right portion
            int smallestEleOfRight1 = cutOfArray1 == n ? INT_MAX : arr1[cutOfArray1];
            int smallestEleOfRight2 = cutOfArray2 == m ? INT_MAX : arr2[cutOfArray2]; 
            
            if(largestEleOfCutArray1 <= smallestEleOfRight2 and largestEleOfCutArray2 <= smallestEleOfRight1){
                return max(largestEleOfCutArray1,largestEleOfCutArray2);
            }
            else if(largestEleOfCutArray2 < largestEleOfCutArray1){
                // we have to cut short the right part
                high = cutOfArray1 -1;
            }
            else{
                low = cutOfArray1 +1;
            }
        }
        return 1;
        
    }
};