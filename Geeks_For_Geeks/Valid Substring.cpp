/*
Given a string S consisting only of opening and closing parenthesis 'ie '('  and ')', find out the length of the longest valid(well-formed) parentheses substring.
NOTE: Length of the smallest valid substring ( ) is 2.

Example 1:

Input: S = "(()("
Output: 2
Explanation: The longest valid 
substring is "()". Length = 2.
*/

/*
// USING STACK

class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        stack<int> st;
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty() or s[st.top()] == ')' or s[i] == '(') st.push(i);
            else{
                st.pop();
             //   int temp = st.empty() ? i+1 : i -st.top();
                int temp;
                if(st.empty() == true) temp = i+1;
                else temp = i-st.top();
                res = max(res,temp);
            }
        }
        return res;
    }
};
*/

class Solution {
  public:
    int findMaxLen(string s) {
        int low =0, high = 0, maxi=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(') low ++;
            else high ++;
            
            if(low == high) maxi = max(maxi,2*high);
            if(high > low) low = high =0;
        }
        low = high =0;
        
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i] == '(') low++;
            else high++;
            
            if(low == high) maxi= max(maxi,2*high);
            if(low > high) low = high =0;
        }
        return maxi;
    }
    
};