/*
Given a string S consisting of the characters 0, 1 and 2. Your task is to find the length 
of the smallest substring of string S that contains all the three characters 0, 1 and 2. 
If no such substring exists, then return -1.

Example 1:

Input:
S = "01212"
Output:
3
*/

int smallestSubstring(string S) {
        // Code here
        int x=0,y=0,z=0,a,b,c,res =S.size(), check=false;
        for(int i=0;i<S.size();i++)
        {
            if(S[i] == '0')
            {
                x=1, a=i;
            }
            else if(S[i] == '1')
            {
                y=1,b=i;
            }
            else 
            {
                z=1,c=i;
            }
            
            if(x!=0 and y!=0 and z!=0) {
                res = min(res,max({a,b,c}) - min({a,b,c}) +1);
                check = true;
            }
        }
        if(check == true) return res;
        return -1;
    }