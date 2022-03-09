/*
Given a string of parentheses s, return the minimum number of parentheses to be removed to
 make the string balanced.

Constraints

n ≤ 100,000 where n is the length of s
Example 1
Input
s = "()())()"
Output
1
Explanation
We can remove the ")" at index 4 to make it balanced.
*/

int solve(string s) {
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ')' and (!st.empty() and st.top() == '(')) st.pop();
        else st.push(s[i]);
    }
    return st.size();
}

int solve(string s) {
    int open = 0, ret = 0;
    for (char c : s) {
        if (c == '(')
            open++;
        else if (open == 0)
            ret++;
        else
            open--;
    }
    ret += open;
    return ret;
}