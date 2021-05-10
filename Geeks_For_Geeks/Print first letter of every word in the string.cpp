	string firstAlphabet(string S)
	{
	    // Your code goes here
	    string res="";
	    bool val = true;
	    int len= S.length();
	    for(int i=0;i<len;i++)
	    {
	        if(S[i]==' '){
	            
	            val=true;
	        }
	        else if(S[i]!=' ' && val==true)
	        {
	            res.push_back(S[i]);
	            val=false;
	        }
	    }
	    return res;
	}