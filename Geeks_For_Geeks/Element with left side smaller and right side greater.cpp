/*
Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.
Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.

Example 1:

Input:
N = 4
A[] = {4, 2, 5, 7}
Output:
5
Explanation:
Elements on left of 5 are smaller than 5
and on right of it are greater than 5.
*/

int findElement(int arr[], int n) {
    int lmax=arr[0],rmin = arr[n-1],res=-1;
    int a1[n],a2[n];
    for(int i=0;i<n;i++){
        if(arr[i] > lmax){
            lmax = arr[i];
        }
        a1[i] = lmax;
    }
    for(int j=n-1;j >=0 ;j--){
        if(arr[j] < rmin){
            rmin = arr[j];
        }
        a2[j] = rmin;
    }
    
    for(int i=1;i<n-1;i++){
        if(a1[i] == a2[i] ){
            res = a1[i];
            break;
        }

    }
    return res;
}