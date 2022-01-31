/*
Given an array, rotate the array by one position in clock-wise direction.
 

Example 1:

Input:
N = 5
A[] = {1, 2, 3, 4, 5}
Output:
5 1 2 3 4
*/
void rotate(int arr[], int n)
{
    /*
    This will take bit more time than the later one
        reverse(arr,arr+n);
        reverse(arr+1,arr+n);
    */

    int x = arr[n-1];
    for(int i=n-1;i>=0;i--){
        arr[i] = arr[i-1];
    }
    arr[0]=x;
}