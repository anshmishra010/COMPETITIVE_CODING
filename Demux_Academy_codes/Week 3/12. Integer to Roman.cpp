/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
*/
class Solution {
public:
    string intToRoman(int num) {
        string res = "";
        vector<int> val{1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> str{"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int i=0;i<val.size();i++)
        {
            while(num >= val[i])
            {
                num = num - val[i];
                res = res+ str[i];
            }
        }
        return res;
        
    }
};