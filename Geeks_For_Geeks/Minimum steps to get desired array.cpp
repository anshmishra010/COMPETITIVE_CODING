/*
Consider an array with N elements and value of all the elements is zero. We can perform following operations on the array.
         1. Incremental operations: Choose 1 element from the array and increment its value by 1.
         2. Doubling operation: Double the values of all the elements of array.
Given an array arr[] of integers of size N. Print the smallest possible number of operations needed to change the original array containing only zeroes to arr[].

Example 1:

Input:
N = 3
arr[] = {16, 16, 16}
Output: 7
Explanation: First apply an incremental 
operation to each element. Then apply the 
doubling operation four times. 
Total number of operations is 3+4 = 7.
*/
class Solution
{
public:
    int countMinOperations(int arr[], int n)
    {
        // isntead of converting 0 array to desired o/p , we are doing opposite, desired o/p to 0
        //thats why( + ) will be (-) and (doubling or *) will be (/).
        int res = 0;
        while (true)
        {
            int zero = 0; // for getting number of 0 in array
            int i;
            for (i = 0; i < n; i++)
            {
                if (arr[i] % 2 != 0)
                    break; // this means number is odd

                else if (arr[i] == 0)
                    zero++;
            }

            if (zero == n)
                return res; // all number in array is zero

            if (i == n)
            { // if all number are even
                for (int j = 0; j < n; j++)
                {
                    arr[j] = arr[j] / 2;
                }
                // in doubling opteration, we have to do it for all the ele in array in one go
                res++;
            }
            for (int x = i; x < n; x++)
            {
                if (arr[x] % 2 != 0)
                {
                    arr[x]--;
                    res++;
                }
            }
        }
    }
};