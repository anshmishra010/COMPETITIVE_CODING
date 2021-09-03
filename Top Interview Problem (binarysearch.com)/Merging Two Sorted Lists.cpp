/*

Given two lists of integers a and b sorted in ascending order, merge them into one large sorted list.

Constraints

0 ≤ n ≤ 200,000 where n is the length of a
0 ≤ m ≤ 200,000 where m is the length of b
Example 1
Input
a = [5, 10, 15]
b = [3, 8, 9]
Output
[3, 5, 8, 9, 10, 15]
*/
/*
vector<int> solve(vector<int>& a, vector<int>& b) {
    int n1 = a.size(),n2 = b.size();
    vector<int> c(n1+n2,0);
    int i=0,j=0,k=0;

    // while(i<n1 and j<n2)
    // {
    //     if(a[i] < b[j]){
    //         c[k++] = a[i++];
    //     }
    //     else{
    //         c[k++] =b[j++];
    //     }
    // }
    // while(i<n1){
    //     c[k++] = a[i++];
    // }
    // while(j<n2){
    //     c[k++] = b[j++];
    // }
    // return c;
    
}
*/
vector<int> solve(vector<int>& lst0, vector<int>& lst1) {
    int n1 = lst0.size();
    int n2 = lst1.size();
    int i = 0, j = 0, k = 0;
    vector<int> num(n1 + n2, 0);
    if (n1 == 0) return lst1;
    if (n2 == 0) return lst0;
    while (k < n1 + n2) {
        if (lst0[i] < lst1[j] && i < n1) {
            num[k] = lst0[i];
            i++;
            k++;
        } else if (j < n2) {
            num[k] = lst1[j];
            j++;
            k++;
        } else if (i < n1) {
            num[k] = lst0[i];
            i++;
            k++;
        }
    }
    return num;
}
// using insertion sort we can do this in O(1) space, but TC will be O(n1*n2)

// and the TC is nlogn , by using GAP alog/Shell sort