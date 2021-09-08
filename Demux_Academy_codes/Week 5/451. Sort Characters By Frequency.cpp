/*
Given a string s, sort it in decreasing order based on the frequency of characters, and return the sorted string.

 

Example 1:

Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.
*/

/*
// as sort func as one more hidden argument, called compare. To overwrite that inbuilt func we have to write it in a global scope.

vector<int> freq(256,0);
bool compare(char a, char b){
    if(freq[a] == freq[b]) return a<b; // if char has same freq, then lexographic
    return freq[a] > freq[b];
}

class Solution {
public:

    string frequencySort(string s) {

        
        vector<int> vt(256,0);

        for(auto i :s )vt[i]++;
        // to tell both of them are same.
        freq = vt;
        sort(s.begin(),s.end(),compare);
        return s;
    }
};
*/



// same above thing did but in shorter way
class Solution {
public:

    string frequencySort(string s) {
        vector<int> freq(256,0);
        for(auto i : s) freq[i]++;
        sort(s.begin(),s.end(),[&](char a,char b){
            if(freq[a] == freq[b]) return a<b;
            return freq[a] > freq[b];
        });
        return s;
    }
};