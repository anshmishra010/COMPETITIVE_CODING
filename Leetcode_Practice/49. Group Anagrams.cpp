/*
Given an array of strings strs, group the anagrams together. You can return the answer in any order.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
typically using all the original letters exactly once.

Example 1:
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string,vector<string>> mp;
    
        
        for(auto i : strs)
        {
            string temp = i;
            sort(i.begin(),i.end());
            mp[i].push_back(temp);
        }
        for(auto x: mp)
        {
            res.push_back(x.second);
        }
        return res;
    }
};
/*
1> sort the string
2> sorting string make a map key
3> insert the map<sorting_string,copy_string>

in this way;
map <string, vector > mp;

mp["aet"].push_back("eat");
mp["aet"].push_back("ate");
mp["aet"].push_back("tea")
*/