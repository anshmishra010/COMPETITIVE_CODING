/*
Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2
 in spiral order.
Example 1:

Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]
*/

    vector<vector<int>> generateMatrix(int n) {
        int r1 =0, r2 = n-1, c1 =0, c2 = n-1, val=0; // ptr moving in 4 dir
        vector<vector<int>> v(n, vector<int>(n));
        
        while(r1<=r2 and c1<=c2)
        {
            for(int i=c1;i<=c2;i++)v[r1][i]=++val; // left to right
            for(int i=r1+1;i<=r2;i++)v[i][c2]=++val; // top to bottom
            for(int i=c2-1;i>=c1;i--)v[r2][i]=++val; // right to left
            for(int i=r2-1;i>r1;i--)v[i][c1]=++val ;// bottom to top
                r1++, c1++, r2--, c2--;
            
        }
        return v;
    }