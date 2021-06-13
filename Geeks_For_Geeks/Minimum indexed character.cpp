/*
Given a string str and another string patt. Find the character in patt that is present at the minimum index in str.
 

Example 1:

Input: str = "zsyle", patt = "bjz"
Output: "z"
*/

string printMinIndexChar(string str, string patt)
	{
	    // Code here
	    // using unordered map
	    // I will be putting all the patt char in map, and then traverse from the str char 
	    // by this we will get minimum index
	    unordered_map<char,int> um;
	    string s;
	    
	    for(int i=0;i<patt.size();i++){
	        um[patt[i]]++;
	    }
	    
	    for(int i=0;i<str.size();i++){
	        if(um.find(str[i]) != um.end()){
	            s=str[i];
	            return s;
	        }
	    }
	    return "$";
	}