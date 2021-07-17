/*
Given a string s, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.
Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
*/

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int len = s.length();
        int i = 0;

        while (i < len)
        {
            if (!isalnum(s[len]))
            {
                len--;
                continue;
            }
            if (!isalnum(s[i]))
            {
                i++;
                continue;
            }
            if (tolower(s[i++]) != tolower(s[len--]))
            {
                return false;
            }
        }
        return true;
    }
};