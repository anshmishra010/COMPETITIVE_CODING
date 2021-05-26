/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        int n = s.size();
        bool ans = true;
        
        for(int i= 0;i<n ;i++)
        {
            if(s[i] == '(' or s[i] == '{' or s[i]== '[')
            {
                temp.push(s[i]);
            }
            else if(s[i] == ')')
            {
                if(!temp.empty() and temp.top() == '(' ){
                    temp.pop();
                }
                else {
                    ans = false;
                    break;
                }
            }
            else if(s[i] == '}')
            {
                if(!temp.empty() and temp.top() == '{')
                {
                    temp.pop();
                }
                else {
                    ans = false;
                    break;
                }
            }
            else if(s[i] == ']')
            {
                if(!temp.empty()  and temp.top() == '[')
                {
                    temp.pop();
                }
                else
                {
                    ans = false;
                    break;
                }
            }
            
        }
        if(!temp.empty()){
            return false;
        }
        return ans;
        
        
    }
};