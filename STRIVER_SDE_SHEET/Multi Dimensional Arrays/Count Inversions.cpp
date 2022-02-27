/*
Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is 
from being sorted. If array is already sorted then the inversion count is 0. 
If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).
*/

long long mergeSort(long long  arr[],long long s,long long  e)
    {
        if(s>=e)return 0;
        int mid=(s+e)/2;
        long long c1=mergeSort(arr,s,mid);
        long long c2=mergeSort(arr,mid+1,e);
        long long ci=merge(arr,s,mid,e);
        return c1+c2+ci;
    }
    long long merge(long long  arr[],long long  s,int mid, long long e)
    {
        long long i=s;
        long long j=mid+1;
        vector<long long > temp;
        long long  cnt=0;
        while(i<=mid and j<=e)
        {
            if(arr[i]<=arr[j])
                temp.push_back(arr[i++]);
            else 
            {
                cnt+=mid-i+1;
                temp.push_back(arr[j]);
                j++; 
            }
        }
        while(i<=mid)temp.push_back(arr[i++]);
        while(j<=e)temp.push_back(arr[j++]);
        int k=0;
        for(int idx=s;idx<=e;idx++)
        {
            arr[idx]=temp[k++];
        }
        return cnt;
    }
    long long int inversionCount(long long  int arr[], long long int N)
    {
        // Your Code Here
        long long c=mergeSort(arr,0,N-1);
        return c;
    }
    