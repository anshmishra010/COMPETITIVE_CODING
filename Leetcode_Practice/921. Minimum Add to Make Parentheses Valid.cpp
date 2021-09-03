/*
A parentheses string is valid if and only if:

It is the empty string,
It can be written as AB (A concatenated with B), where A and B are valid strings, or
It can be written as (A), where A is a valid string.
You are given a parentheses string s. In one move, you can insert a parenthesis at any position of the string.

For example, if s = "()))", you can insert an opening parenthesis to be "(()))" or a closing parenthesis to be "())))".
Return the minimum number of moves required to make s valid.

 

Example 1:

Input: s = "())"
Output: 1
*/

class Solution {
public:
    int minAddToMakeValid(string s) {
        
        /*
Without stack        
        
        int n =s.length();
        if(n ==  0) return 0;
        
        int a=0,b=0;
        for(int i=0;i<n;i++){
            
            if(s[i] == '('){
                b++;
            }else{
                b--;
            }
            
            if(b == -1){
                a++;
                b++;
            }
        }
        return a+b;
        */
        
        stack<char> st;
        int a=0;
        for(auto it : s){
            if(it == '('){
                st.push(it);
            }
            else
                if(st.size()){
                    st.pop();
                }
                else{
                    a++;
                }
            
        }
        return a+st.size();
    }
};