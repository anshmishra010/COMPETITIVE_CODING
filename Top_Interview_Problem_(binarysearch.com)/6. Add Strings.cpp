/*
Given two strings a, and b, both representing an integer, add them and return it in the same string representation.
This should be implemented directly, instead of using eval or built-in big integers.

Constraints`

n ≤ 200 where n is the length of a
m ≤ 200 where m is the length of b
Example 1
Input
a = "12"
b = "23"
Output
"35"
*/

string solve(string a, string b) {
    int i = a.size()-1;
    int j = b.size()-1;
    int carry=0;
    string res = "";
    while(i >=0 or j>=0 or carry !=0){
        // we can also use if /else

        // we are adding one by one value to it, if we get the value then we get it by a[i]-'0' , else we add 0;
        int a_val = i>=0 ? a[i]-'0' : 0;
        int b_val = j>=0 ? b[j]-'0' : 0;

        i--;
        j--;

        int sum = carry + a_val+b_val;
        res = to_string(sum%10) + res;
        carry = sum/10;
    }
    return res;
}