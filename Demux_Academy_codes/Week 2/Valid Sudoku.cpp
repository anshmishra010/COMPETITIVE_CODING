class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int r = board.size(), c = board[0].size();
        
        /*
         It is not good approach, as we are using 3 extra space.
         
        unordered_map<char,int> row[9];
        unordered_map<char,int> col[9];
        unordered_map<char,int> box[9];
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                char ch = board[i][j];

                if(ch != '.' and (row[i][ch]++ >0 or col[j][ch]++ > 0 or box[i/3*3 + j/3][ch]++ >0)){
                    return false;
            
                      box is like the first cell is 0 box , and the next cell(right ward) is 2 box, 
                      the cell just downwards of 0 box is 3 box.
                    
                }
            }
        }
        return true;
        */
        
        unordered_set<string> res;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if (board[i][j] == '.') continue;   
                
                string ch(1,board[i][j]);
                
                /* in this we are trying to fill the entry row / col / box in a unique pattern so that 
                  while finding the entry we can differentiate it
                 */     
                string row = ch+"(" + to_string(i) + ")"; //5(0) => entry(row pos)
                string col = "(" + to_string(j) + ")" + ch;//(1)3  => (col pos) entry
                string box = "(" + to_string(i/3) + ch + to_string(j/3) + ")"; //(090) => (box entry box)
                
                if(res.find(row) != res.end() or res.find(col) != res.end() or res.find(box) != res.end()){
                    // if we found multiple entry then retrun false
                    return false;
                }
                else{
                    // is not then we will insert that entry.
                    res.insert(row);
                    res.insert(col);
                    res.insert(box);
                }
            }
        }
        return true;
    }
};