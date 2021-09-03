/*
Given a string s containing brackets ( and ), return the minimum number of brackets that can be inserted so that the brackets are balanced.

Constraints

n ≤ 100,000 where n is the length of s
Example 1
Input
s = ")))(("
Output
5
Explanation
We can insert ((( to the front and )) to the end
*/

int solve(string s) {
    int a =0,b=0;
    for(int i=0;i<s.length();i++){
        if(s[i] == '('){
            b++;
        }
        else{
            b += -1;
        }

        if(b == -1){
            a++;
            b++;
        }
    }
    return a+b;
}