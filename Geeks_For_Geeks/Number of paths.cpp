/*
The problem is to count all the possible paths from top left to bottom right of a MxN matrix with the constraints that from each cell you can either move to right or down.

Example 1:

Input:
M = 3 and N = 3
Output: 6
Explanation:
Let the given input 3*3 matrix is filled 
as such:
A B C
D E F
G H I
The possible paths which exists to reach 
'I' from 'A' following above conditions 
are as follows:ABCFI, ABEHI, ADGHI, ADEFI, 
ADEHI, ABEFI
*/
long long  numberOfPaths(int m, int n)
{
    if(m==1 or n ==1) return 1;
    // this is the just one block ahead of that destination matrix
    
    return numberOfPaths(m-1,n) + numberOfPaths(m,n-1);
}
// this can also be done by dp