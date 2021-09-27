/*
Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

Example 1:

Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".
*/
/*
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        // using stack
        stack<char> st1;
        stack<char> st2;
        int i=0,j=0;
        int n = s.size(), m = t.size();
        
        while(i<n)
        {
            if(s[i] != '#') st1.push(s[i]);
            else if(!st1.empty() )
            {
                st1.pop();
            }
            i++;
        }
        while( j<m)
        {
            if(t[j] != '#') st2.push(t[j]);
            else if (!st2.empty()){
               
                st2.pop();
            }
            j++;
        }
        while(!st1.empty() and !st2.empty())
        {
            if(st1.top() != st2.top()){
                return false;
            }
            st1.pop();
            st2.pop();
        }
        
        
        if(!st1.empty() or !st2.empty()) return false;
        return true;
        
    }
};

*/
// --------------------------------------------------------------------------
// more optimised
class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        int k = 0, p = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '#')
            {
                k--;
                k = max(0, k);
            }

            else
            {
                s[k] = s[i];
                k++;
            }
        }
        for (int i = 0; i < t.size(); i++)
        {
            if (t[i] == '#')
            {
                p--;
                p = max(0, p);
            }

            else
            {
                t[p] = t[i];
                p++;
            }
        }
        if (k != p)
            return false;
        else
        {
            for (int i = 0; i < k; i++)
            {
                if (s[i] != t[i])
                    return false;
            }
            return true;
        }
    }
};