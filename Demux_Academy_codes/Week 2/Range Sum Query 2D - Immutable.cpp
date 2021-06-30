
//https://leetcode.com/problems/range-sum-query-2d-immutable/

class NumMatrix
{

public:
    vector<vector<int>> prefix_sum;

    NumMatrix(vector<vector<int>> &matrix)
    {

        int m = matrix.size(), n = matrix[0].size();

        prefix_sum = vector<vector<int>>(m, vector<int>(n, 0));

        // Iterate over all the prefix subarrays.

        for (int i = 0; i < m; i++)
        {

            for (int j = 0; j < n; j++)
            {

                // prefix_sum[i][j] = Prefix sum of mat[(0, 0) to (i, j)]

                prefix_sum[i][j] = matrix[i][j];

                if (j - 1 >= 0)

                    prefix_sum[i][j] += prefix_sum[i][j - 1];

                if (i - 1 >= 0)

                    prefix_sum[i][j] += prefix_sum[i - 1][j];

                if (i - 1 >= 0 && j - 1 >= 0)

                    prefix_sum[i][j] -= prefix_sum[i - 1][j - 1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2)
    {

        int res = prefix_sum[row2][col2];

        if (col1 - 1 >= 0)

            res -= prefix_sum[row2][col1 - 1];

        if (row1 - 1 >= 0)

            res -= prefix_sum[row1 - 1][col2];

        if (row1 - 1 >= 0 && col1 - 1 >= 0)

            res += prefix_sum[row1 - 1][col1 - 1];

        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */