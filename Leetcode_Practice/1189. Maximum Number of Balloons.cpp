/*
Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.

You can use each character in text at most once. Return the maximum number of instances that can be formed.

 

Example 1:



Input: text = "nlaebolko"
Output: 1
*/

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        int n= text.size();
        int res=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(text[i] == 'b' or text[i] == 'a' or text[i] == 'l' or text[i] == 'o' or text[i] == 'n'){
                mp[text[i]]++;
            }
        }
        mp['l'] /= 2;
        mp['o'] /= 2;
        
        for(auto j : mp)
        {
            res = min(res,j.second);
        }
        if(mp.size() == 5)return res;
        else return 0;
                                                                         
                                                                
    }
};