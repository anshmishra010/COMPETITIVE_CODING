	int minNum(long long int arr[],int n)
	{
	    // Your code goes here
	    long sum=0;
	    sum= accumulate(arr, arr+n,sum);
	    if(sum%2 == 0)
	    {
	        return 2;
	    }
	    else
	    {
	        return 1;
	    }
	}