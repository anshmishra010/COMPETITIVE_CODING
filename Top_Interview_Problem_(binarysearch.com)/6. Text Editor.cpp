/*
Given a string s representing characters typed into an editor, with "<-" representing a backspace, return the current state of the editor.

Constraints

n ≤ 100,000 where n is the length of s
Example 1
Input
s = "abc<-z"
Output
"abz"
Explanation
The "c" got deleted by the backspace.

Example 2
Input
s = "<-x<-z<-"
Output
""
Explanation
All characters are deleted. Also note you can type backspace when the editor is empty as well.
*/
/*
string solve(string s) {
    string res;
    int i=0;
    int n = s.size();
    while(i<n)
    {
        if(s[i] == '<' and s[i+1] == '-' and i+1 <n){
            if(res.length() >0) res.pop_back();
            i+=2;
        }
        else{
            res.push_back(s[i]);
            i++;
        }
    }
    return res;
}
*/
/*
// without using any space
string solve(string s){
    int i=-1;
    for(int j=0;j<s.size();j++){
        if(s[j] == '<' and s[j+1] == '-' and j+1 < s.size()){
            i = max(i-1,-1);
            j++;
        }
        else{
            i++;
            s[i] =s[j];
        }
    }
    s.resize(i+1);
    return s;
}
*/

// by using stack
string solve(string s){

stack<char> st;
int n = s.size();
for(int i=0;i<n;i++){
    if(s[i] != '<' or s[i+1] != '-'){
        st.push(s[i]);
    }
    else{
        if(!st.empty()){
            st.pop();
        }
        i++;
    }
}
string res = "";
int x = st.size();
for(int i=0;i<x;i++){
    res.push_back(st.top());
    st.pop();
}
reverse(res.begin(),res.end());
return res;
}