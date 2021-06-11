/*
Given a string s consists of some words separated by spaces, return the length of the last word in the string. If the last word does not exist, return 0.

A word is a maximal substring consisting of non-space characters only.
*/
//https://leetcode.com/problems/length-of-last-word/


class Solution {
public:
    int lengthOfLastWord(string s) {
        int sum =0;
        int len = s.size();
        
        for(int i=len -1; i>=0;--i)
        {
            if(s[i] != ' '){
                sum++;
            }
            // this means we encounter the space and if we have any value in sum then just return it
            else if(sum){
                return sum;
            }
        }
        return sum;

    }
};