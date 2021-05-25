/*
Given a row wise sorted matrix of size RxC where R and C are always odd, find the median of the matrix.

Example 1:

Input:
R = 3, C = 3
M = [[1, 3, 5], 
     [2, 6, 9], 
     [3, 6, 9]]

Output: 5

Explanation:
Sorting matrix elements gives us 
{1,2,3,3,5,6,6,9,9}. Hence, 5 is m

link : https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1#
*/



public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here  
        // using binary search
        // we can also use an array to store the element and then find the median , but it was efficicent
        int min = INT_MAX, max = INT_MIN;
        //finding the min max 
        for(int i=0;i<r;i++){
            if(matrix[i][0] < min){
                min = matrix[i][0];
            }
            if(matrix[i][c-1] > max){
                max = matrix[i][c-1];
            }
        }
        //desired location which we have to find
        int d_l = (r*c+1)/2;
        
        while(min<max){
            int m = min + (max-min)/2;
            // to store the upper bound location
            int place =0;
            for(int i=0;i<r;i++){
                place += upper_bound(matrix[i].begin(),matrix[i].end(),m) - matrix[i].begin();
            }
            if(place < d_l){
                min = m+1;
            }
            else
            {
                max = m;
            }
        }
        return min;
    }
};