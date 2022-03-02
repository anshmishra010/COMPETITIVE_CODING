/*
Given a string S containing lowercase english alphabet characters. The task is to calculate
 the number of distinct strings that can be obtained after performing exactly one swap.
In one swap,Geek can pick two distinct index i and j (i.e 1 < i < j < |S| ) of the string, 
then swap the characters at the position i and j.

Example 1:

Input:
S = "geek"
Output: 
6
Explanation: 
After one swap, There are only 6 distinct strings 
possible.(i.e "egek","eegk","geek","geke","gkee" and 
"keeg")
*/

long long countStrings(string S)
    {
         /*
         We just have to count number of ways a particular char can be placed
         */
         int n = S.size();
         bool check_duplicate = false;
         unordered_map<char,int> um; // for storing frequency
         long long result=0;
         
         for(auto i: S){
             um[i]++;
             if(um[i] >= 2) check_duplicate = true; // we found a duplicate char
         }
         
         for(int i=0;i<n;i++)
         {
             um[S[i]]--; // decreasing the freq count
             result += n-i-1-um[S[i]];
             /*
              n-um[S[i] => to get the different swaps which S[i] can perfom
              n-i => to get how many numbers left remaining
             */
         }
                  // if there is any duplicate then we can swap in between the duplicate chars too.
         if(check_duplicate == true) return result+1;
         return result;
    }