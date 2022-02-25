/*
There are two kinds of bots A and B in a 1-D array. A bot can only move left while B can 
only move right. There are also empty spaces in between represented by #. But its also 
given that the bots cannot cross over each other.
Given the initial state and final state, we should tell if the transformation is possible.

NOTE: There can be many bots of the same type in a particular array. 


Example 1:

Input:
s1 = #B#A#
s2 = ##BA#
Output: Yes
Explanation: Because we can reach the 
final state by moving 'B' to the 
right one step.

*/

    string moveRobots(string s1, string s2){
        // code here 
        int i=0,j=0, n= s1.size();
        
        while(i<n and j<n)
        {
            while(i<n and s1[i] == '#') i++;
            while(j<n and s2[j] == '#')j++;
            
            if(i<n and j<n)
            {
                if(s1[i] != s2[j]) return "No";
// neither one can move left or right
                else if((s1[i] == 'A' and j>i) or (s2[j] == 'B' and j<i)) {
                   
                    return "No";
                } 
                else i++,j++;
                
            }
            else break;
        }
        return (i ==n or j ==n )? "Yes":"No";
    }