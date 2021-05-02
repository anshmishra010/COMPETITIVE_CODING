class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int col_0 = 1, r = matrix.size(), c = matrix[0].size();
        
        //for traversing
        for(int i=0;i<r;i++)
        {
            if(matrix[i][0] == 0) col_0 = 0;
            for(int j=1;j<c;j++)
            {
                if(matrix[i][j] == 0)
                {
                    matrix[i][0] = matrix[0][j] =0;
                }
            }
            
        }
        
        //traversing reverse
        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>=1;j--){
                if(matrix[i][0] ==0 || matrix[0][j] == 0){
                    matrix[i][j] =0;
                }
            }
            if(col_0 == 0)matrix[i][0] =0;
        }
 
    }
};

// brute force approach 
/*
firslty , we ask that wether all the input is in positive or not . After that We will traverse the entire matrix and if we find zero we will change "no zero " element of the corresponding matrix to -1. And we will do till end , and after that we will replace all the -1 to zero . Time comp - O(m*n)*(n+m). space -  O(1)
*/

// better approach
/*
We will make 2 dummy array(row , col) and we will traverse through the matrix if 0 found then we will store the index (row and col) into that 2 dummy array and we will do this till end. And after that we will trverse through the array and check the index , if we get any of the index zero then we will change the same index in the matrix , replace it with zero
Time comp- O(n*m + m*n) space - O(n)+ O(m)
*/

//best approach
/*
We will first row and col as a dummy and will make the var and set it as a true , and then do trversal .
Time - 2*O(n*m) space - O(1)
this method implemented
*/