/*
Given an IP address, remove leading zeros from the IP address. Note that our IP address here can be a little different. It can have numbers greater than 255. Also, it does not necessarily have 4 numbers. The count can be lesser/more.

Example 1:

Input:
S = "100.020.003.400"
Output: 100.20.3.400
Explanation: The leading zeros are removed
from 20 and 3.
*/

string newIPAdd (string s)
    {
        //code here.
        string res ="";
        int n = s.size();
        
        for(int i =0;i<n;i++){
            string temp="";
            while(i < n and s[i] == '0') i++;
            while(i<n and s[i] != '.') temp += s[i++];
            
            // if by chance case comes like this => .000. it won't fit in both loop but we have to add one zero in btw
            if(temp.size() == 0) temp += '0';
            
            // res += i<n ? temp+'.' : temp;
            
            // as if we are in the middle then we need dot
            if(i < n) res += temp + '.';
            // if we are at the last then dot is not required
            else res += temp;
        }
        return res;
    }