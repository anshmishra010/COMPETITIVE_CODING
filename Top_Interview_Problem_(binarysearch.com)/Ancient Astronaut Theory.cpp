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

// O(1) space solution
 bool solve(string dictionary, string s) {

    int last_valid = 0;

    for(int i=1;i<s.length();i++)
    {
        int x,y;
        x = y = -1;

        char a = s[last_valid];
        char b = s[i];

        x = dictionary.find(a) < dictionary.length() ? dictionary.find(a) : -1;

        y = dictionary.find(b) < dictionary.length() ? dictionary.find(b) : -1;

        if(x==-1 || y == -1)
        {
            if(y!=-1)last_valid = i;
            continue;
        }
        else
        {
            if(x > y)return 0;

            last_valid = i;
        }

    }

    return 1;


}