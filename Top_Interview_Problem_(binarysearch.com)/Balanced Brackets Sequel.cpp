/*
Given a string s containing round, curly, and square open and closing brackets, 
return whether the brackets are balanced.

*/


    bool solve(string s) {
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
