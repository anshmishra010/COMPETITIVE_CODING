/*
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Example 1:

Input: rowIndex = 3
Output: [1,3,3,1]
*/
// this question is bit tough than the given question

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // making the res vector to store the answer
        // and filling it with 1
        
        /*
        
        vector<int> res(rowIndex+1, 1);
        
        for(int row = 0; row < rowIndex; row++){
            for(int col = row; col>0;col--)
            {
                res[col] += res[col-1];
            }
        }
        return res;
       
       This will take TC of O(k*k)
     */   
        
        // optimal sol
        // we can do it by a mathematical way
        // for every rowindex we have C(row,i)
        /*
        We know that the elements of the ith line of pascal triangle is just the coefficients of the expansion of (a + b) ^ i

        For example, the 4th line: 1 4 6 4 1

        (a + b) ^ 4 = a^4 + 4a^3b + 6a^2b^2 + 4ab^3 + b^4

        And the we know the coefficients can be computed by composition. For the above example, the coefficients are respectively C(4, 0), C(4, 1), C(4, 2), C(4, 3), C(4, 4).
        */
        
        vector<int> res(rowIndex+1, 1);
        long x = 1;
        
        for(int i =1;i<rowIndex;i++){
            x = x * (rowIndex -i +1)/i;
            res[i] = x;
        }
        return res;
    }
};