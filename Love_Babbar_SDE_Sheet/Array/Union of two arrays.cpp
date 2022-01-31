/*
Given two arrays a[] and b[] of size n and m respectively. The task is to find union between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements from both the arrays. 
If there are repetitions, then only one occurrence of element should be printed in the union.
*/

int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> s;
        for(int i=0;i<n;i++) s.insert(a[i]);
        for(int j=0;j<m;j++) s.insert(b[j]);
        return s.size();
    }