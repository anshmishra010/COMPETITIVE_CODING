/*
Given a NxM binary matrix consisting of 0s and 1s. 
Find if there exists a rectangle/ square within the matrix whose all four corners are 1. 
*/

bool ValidCorner(const vector<vector<int> >& matrix)
    {
        // Your code goes here
        int m = matrix.size();
        int n = matrix[0].size();
        unordered_map<int,unordered_set<int>> temp;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                for(int k = j+1;k<n;k++){
                    if(matrix[i][j] == 1 and matrix[i][k] == 1){
                        // we found one pair on that row
                        // next we have to check if we get any  pair in same column and different row
                        // firstly finding key(first occourence of 1 in the row) , then finding if have the same pair in the set. 
                        if(temp.find(j) != temp.end() and temp[j].find(k) != temp[j].end()) return true;
                        else temp[j].insert(k); // we are {col,(next occ of 1 in the same row)} => {col,(col+)} pair
                    }
                }
            }
        }
        return false;
    }