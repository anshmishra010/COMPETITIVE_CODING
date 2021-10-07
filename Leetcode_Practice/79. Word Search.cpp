/*
Given an m x n grid of characters board and a string word, return true if word exists in the grid.
The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring.
 The same letter cell may not be used more than once.

 Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
Output: true
*/


class Solution {
    public:
    
    bool search(vector<vector<char>>& board, int i, int j , string &word, int idx,  vector<vector<bool>> &vis){
        if(idx == word.length()-1) return true;
        vis[i][j] = true;
        
        if(i>0 and !vis[i-1][j] and board[i-1][j]== word[idx+1] and search(board, i-1, j , word, idx+1, vis)) return true;
        
        if(j>0 and !vis[i][j-1] and board[i][j-1]== word[idx+1] and search(board, i , j-1 , word, idx+1, vis)) return true;
        
        if(i< board.size()-1 and !vis[i+1][j] and board[i+1][j]== word[idx+1] and search(board, i+1 , j , word, idx+1, vis)) return true;
        
        if(j<board[0].size()-1 and !vis[i][j+1] and board[i][j+1]== word[idx+1] and search(board, i , j+1 , word, idx+1, vis)) return true;
        
       vis[i][j] = false;
       return false;
    }

    

    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size(), c= board[0].size();
        vector<vector<bool>> vis(r,vector<bool>(c,false));
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(board[i][j] == word[0] and search(board,i,j,word,0,vis)) return true;
            }
           
        }
         return false;
    }
};