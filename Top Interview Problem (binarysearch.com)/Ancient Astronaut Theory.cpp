/*
You are given a string dictionary, representing a partial lexicographic ordering of ancient astronauts' dictionary. Given a string s, return whether it's a lexicographically sorted string according to this ancient astronaut dictionary.

Example 1
Input
dictionary = "acb"
s = "aaaa h ccc i bbb"
Output
true
Explanation
The only constraint is that a comes before c which comes before b .
*/
bool solve(string dictionary, string s) {
    // we can solve this in O(1) space in python but not in cpp
    unordered_map<char,int> mp;
    for(auto i=0;i<dictionary.size();i++){
        mp.insert({dictionary[i],i+1});
    }
    string temp;
    // in this we will be descarding other char from string s which is not in dictionary
    for(auto i=0;i<s.size();i++){
        if(mp.find(s[i]) != mp.end()) temp += s[i];
    }

    for(auto i=1;i<temp.size();i++){
        int prev = mp[temp[i-1]];
        int cur = mp[temp[i]];
        if(prev > cur) return false;
    }
    return true;
}