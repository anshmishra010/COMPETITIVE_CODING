/*
Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order.
Merge them in sorted order without using any extra space. Modify arr1 so that it
contains the first N elements and modify arr2 so that it contains the last M elements.
 
Example 1:

Input: 
n = 4, arr1[] = [1 3 5 7] 
m = 5, arr2[] = [0 2 6 8 9]
Output: 
arr1[] = [0 1 2 3]
arr2[] = [5 6 7 8 9]
Explanation:
After merging the two 
non-decreasing arrays, we get, 
0 1 2 3 5 6 7 8 9.
*/

void merge(long long nums1[], long long nums2[], int n, int m) 
        { 
            // using gap method
            int gap = ceil((float)(m+n)/2);
            int total = n+m, i =0,j = gap;
            
            while(gap > 0)
            {
                while(j < total){
                    // comparing in same array
                    if(j<n and nums1[i] > nums1[j]){
                        swap(nums1[i],nums1[j]);
                    }
                    
                    // comapring 1 and 2 array
                    else if(j>=n and i<n and nums1[i] > nums2[j-n]){
                        swap(nums1[i],nums2[j-n]);
                    }
                    
                    //comparing in same array 2
                    else if(j>=n and i>=n and nums2[i-n] > nums2[j-n]){
                        swap(nums2[i-n],nums2[j-n]);
                    }
                    i++, j++;
                } 
                    if(gap == 1) gap =0;
                    
                    else
                    {
                        gap = ceil((float)gap/2);
                        i=0;
                        j = gap;
                    }
            }
            

        }