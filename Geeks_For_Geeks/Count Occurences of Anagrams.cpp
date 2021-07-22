/*
Given a word pat and a text txt. Return the count of the occurences of anagrams of the word in the text.

Example 1:

Input:
txt = forxxorfxdofr
pat = for
Output: 3
Explanation: for, orf and ofr appears
in the txt, hence answer is 3.
*/
int search(string pat, string txt) { //txt = aabaabaa pat = aaba
unordered_map<char,int>m;
	    int n=txt.size();
	    int k=pat.size();
	    for(int x=0;x<k;x++)
	    {
	        m[pat[x]]++;   
	    }
	    int count=m.size();
	    
	    int ans=0;
	    int i=0,j=0;
	   while(j<n)
	    {
	       if(m.find(txt[j])!=m.end())
	       {
	           m[txt[j]]--;
	           if(m[txt[j]]==0)count--;
	       
	       }
	      if(j-i+1<k)
	      {
	         j++; 
	      }
	      else if(j-i+1==k)
	      {
	          if(count==0)
	          {
	              ans++;
	          }
	          
	          if(m.find(txt[i])!=m.end())
	          {
	              if(m[txt[i]]==0)count++;
	              m[txt[i]]++;
	              
	          }
	          
	         
	          i++;
	          j++;
	      }
	       
	    }
	     return ans;
}