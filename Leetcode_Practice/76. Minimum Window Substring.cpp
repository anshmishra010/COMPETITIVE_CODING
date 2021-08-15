/*
Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window.
 If there is no such substring, return the empty string "".
The testcases will be generated such that the answer is unique.
A substring is a contiguous sequence of characters within the string.

Example 1:
Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
*/

class Solution {
public:
string minWindow(string s, string t) {

    int n=s.length();
    int count=0;//count is used to indicate the unique characters in string t.
    
    //First create an vector of length as we have to store both uppercase and lowercase letters .
    
    vector<int>m(256,0);
    
    //Then store the occurences of each and every character of string t.
    
    for(int i=0;i<t.length();i++){
        if(m[t[i]]==0){
            count++;
        }
        m[t[i]]++;
    }
    
    
    int l=0,r=0;// l and r are our two pointers to proceed with sliding window algo.
    
    int minn=INT_MAX;//As we have to return the minimum length substring.
    int start=-1;// Starting index of the substring initialize it with -1.
    
    //Finally start the SLIDING WINDOW ALGORITHM.
    
    while(l<n && r<n){
        
        //Start decrement the value characters of the string
        m[s[r]]--;
        
        //Now if any of the character count in the substring is zero that means all the occurences of that character in string t exists in that substring.
        
        //That is why we decrement our number of unique characters i.e count.
        if(m[s[r]]==0){
            count--;
        }
        
        //If count becomes zero that means all the character (with suplicates) of string t is contained by these substring of length (r-l+1) .
        
        
        
        if(count==0){
          
            //Now we should contract the window length considering that each and every occurence of string t characters should be present in that defined substring.
            
            //Previous condition checking
            
            while(count==0){
                
                //Modify the value of substring length as per question and alse store its starting index.
                
                
                if((r-l+1)<minn){
                    minn=r-l+1;
                    start=l;
                }
                
                //When we start contracting the window length we should add the occurences of every character from starting index(i.e l)
                
                
                m[s[l]]++;
                
                //At the time of windowlength contraction we should keep in mind that all the necessary characters of string t should be present in substring.
                
                //Otherwise increment count and break the while loop.
                
                if(m[s[l]]>0){
                    count++;
                }
                
                l++;
                
            }
        }
        
        r++;
        
    }
    
    if(start==-1||minn==INT_MAX){
        return "";
    }
    
    else{
        return s.substr(start,minn);
    }
    
}
};

Comments: 0