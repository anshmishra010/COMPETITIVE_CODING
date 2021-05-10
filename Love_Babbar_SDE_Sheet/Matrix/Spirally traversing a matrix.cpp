class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        //we will be using 4 pointer 
        vector<int> res;
        int dir =0;
        //bot = bottom or down
        int top = 0, bot = r-1, left = 0, right = c-1;
        
        while(top <= bot && left <= right)
        {
            // firstly we will check direction
            if(dir == 0)
            {
                for(int i=left;i<=right;i++){
                    res.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(dir == 1)
            {
                for(int i=top;i<= bot ;i++){
                    res.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(dir == 2)
            {
                for(int i=right;i>=left;i--){
                    res.push_back(matrix[bot][i]);
                }
                bot--;
            }
            else if(dir == 3)
            {
                for(int i=bot; i>=top;i--){
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
            dir = (dir+1)%4;
        }
        return res;
    }
};