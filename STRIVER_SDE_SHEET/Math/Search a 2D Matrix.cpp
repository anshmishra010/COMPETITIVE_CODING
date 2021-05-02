class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //by using binary search

        int r = matrix.size();
        int c = matrix[0].size();
        if(!r) return false;
        
        int low = 0;
        int high = (r*c)-1;
        
        while(low<= high)
        {
            int mid = (low + (high - low)/2);
            if(matrix[mid/c][mid%c] == target)
            {
                return true;
            }
            if(matrix[mid/c][mid%c] < target)
            {
                low = mid+1;
            }
            else
            {
                high =  mid-1;
            }
        }
        return false;
    }
};

//brute force
/*
Compare each and every ele one by one ,  time - O(n*m)
*/

//better app
/*
make a pointer point to top rightmost of the matrix and start traversing from there , time - O(n*logn)
*/

//best app
/*
We will use binary search in the 2d matrix . time - log(n*m)
*/