/*
Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.

Example 1:

Input: 
N = 4 , M = 4
Arr[][] = {{0, 1, 1, 1},
           {0, 0, 1, 1},
           {1, 1, 1, 1},
           {0, 0, 0, 0}}
Output: 2
Explanation: Row 2 contains 4 1's (0-based
indexing).
*/

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    // firstly a bit less optimize
	    
	    int res = -1;
        // firstly traversing through col
	    for (int i=0;i<m;i++)
	    {
            // then row
	        for(int j=0;j<n;j++)
	        {
	            if(arr[j][i] == 1)
	            {
                    // whenever we get the first 1 in the row we will return that index
	                return j;
	            }
	        }
	    }
	    return res;
	    
	      
	}

};
//naive approach 
/*
we will make a count and traverse through each row
and we will update the count whenever we will get max 1 in a row
this will take O(n*m) Tc
*/

// better apporach 
/*
we will be using binary search on each row 
TC will be Nlog M

*/

//best appraoch
/*
we will be traversing through in upwards to downwards order in each column
TC in avg - O(n+m), but in worst it can be O(n*m)
*/

// most optimal
/*
we will be traversing in a ladder way, firstly we check how many one we have in first row
then we will check the first one in another row, if we get a row which have one first as compared to previous row then we will update it and return it.
 TC - O(n+m)
*/