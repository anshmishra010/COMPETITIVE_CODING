/*
Given two strings a and b that represent binary numbers, add them and return their sum, also as a string.

The input strings are guaranteed to be non-empty and contain only 1s and 0s.

Constraints

n ≤ 100,000 where n is the length of a
m ≤ 100,000 where m is the length of b
Example 1
Input
a = "1"
b = "1"
Output
"10"
*/

/*
class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int i = a.size()-1, j = b.size()-1, carry =0;
        
        while(i>=0 or j>=0)
        {
            int sum = carry;
            if(i>=0) sum += a[i--]-'0';
            if(j>=0) sum += b[j--]-'0';
            carry = sum>1 ? 1:0;
            res += to_string(sum%2);
        }
        if(carry) res+=to_string(carry);
        reverse(res.begin(),res.end());
        return res;
        
    }
};
*/

/*
string addBinary(string a, string b) {
        int i = a.length()-1;
        int j = b.length()-1;
        string ans;
        int carry = 0;
        
        while(i>=0 || j>=0 || carry){
            if(i>=0){
                carry += a[i] - '0';
                i--;
            }
            if(j>=0){
                carry += b[j] - '0';
                j--;
            }
            
            ans += (carry%2 + '0');
            carry = carry/2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
*/

class Solution {
public:
    string addBinary(string a, string b) {
        int i =a.size()-1, j=b.size()-1, carry=0;
        string res;
        
        while(i>=0 or j>=0 or carry ==1)
        {
            int num1 =0, num2=0;
            if(i>=0) num1 = a[i--]-'0';
            if(j>=0) num2 = b[j--]-'0';
            
            int sum = carry + num1+num2;
            res = to_string(sum%2) +res;
            carry = sum/2;
        }
        return res;
        
    }
};