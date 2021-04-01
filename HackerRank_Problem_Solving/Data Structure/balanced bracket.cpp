string isBalanced(string s) {
    int n = s.size();
    stack<char> st;
    
    for(int i=0;i<n;i++){
        if(s[i] =='(' ||  s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else if(!st.empty() && 
        (s[i] == ')' && st.top()=='(' ||
         s[i] == '}' && st.top()== '{' ||
          s[i] == ']' && st.top() =='['))
        {
            st.pop();
        }
        else
        {
            return "NO";
        }
    }
    if(st.empty())  return "YES";
    else return "NO";
}