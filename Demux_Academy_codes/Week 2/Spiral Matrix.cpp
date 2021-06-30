class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     
        // row, column
        int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = n-1, top = 0, bottom = m-1;
        
        vector <int> res;
        
        while(left <= right and top <= bottom){
            
            for(int i =left;i<= right ;i++) res.push_back(matrix[top][i]);
            
            for(int i= top +1; i<= bottom;i++) res.push_back(matrix[i][right]);
        
            if(top != bottom){
                for(int i=right-1; i>= left;i--) {
                    res.push_back(matrix[bottom][i]);
                }    
            }
            
            if(left != right){
                for(int i=bottom-1;i > top;i--) {
                    res.push_back(matrix[i][left]);
                }
            }
            
            left++;
            right--;
            top++;
            bottom--;
            
        }
        return res;
        
    }
};