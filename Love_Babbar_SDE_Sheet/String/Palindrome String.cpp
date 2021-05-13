class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	    int l = 0;
	    int h = S.length()-1;
	    int ans = 1;
	    while(h>l){
	        if(S[l] != S[h]){
	            ans =0;
	            break;
	        }
	        l++;
	        h--;
	    }
	    return ans;
	}

};