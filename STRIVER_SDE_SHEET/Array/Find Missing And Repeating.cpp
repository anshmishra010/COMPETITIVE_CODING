/*
Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.

Example 1:

Input:
N = 2
Arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and 
smallest positive missing number is 1.
*/

    int *findTwoElement(int *arr, int n) {
        // code here
         int *res = new int[2];
        sort(arr,arr+n);
       
        int temp=1;
        for(int i=0;i<n;i++){
            if(arr[i] == arr[i+1]){
                res[0] = arr[i];
            } 
            if(arr[i] == temp) temp++;
        }
        res[1] = temp;
        return res;
    }