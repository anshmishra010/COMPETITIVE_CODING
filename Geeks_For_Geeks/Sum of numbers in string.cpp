int findSum(string str)
{
	string temp = " ";
	int sum = 0;
	for(char ch : str)
	{
	    if(isdigit(ch))
	    {
	        temp += ch;
	    }
	    else
	    {
	        sum+=atoi(temp.c_str());
	        temp=" ";
	    }
	}
	// Your code here
	return sum+atoi(temp.c_str());
	
}