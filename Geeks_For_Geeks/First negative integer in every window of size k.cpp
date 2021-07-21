/*
Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.

Example 1:
Input : 
N = 5
A[] = {-8, 2, 3, -6, 10}
K = 2
Output : 
-8 0 -6 -6
Explanation :
First negative integer for each window of size k
{-8, 2} = -8
{2, 3} = 0 (does not contain a negative integer)
{3, -6} = -6
{-6, 10} = -6
*/

vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K)
{
    //sliding window method 
    vector<long long> res;
    queue<int> q;
    int start = 0, end = 0;
    while (end < N)
    {
        if (A[end] < 0)
        {
            q.push(A[end]);
        }
        if (end - start + 1 < K)
        {
            end++;
        }
        else if (end - start + 1 == K)
        {
            if (q.size() == 0)
            {
                res.push_back(0);
            }
            else
            {
                res.push_back(q.front());
            }
            if (A[start] < 0)
            { // as if we have to empty the queue, when we moe the slide.
                q.pop();
            }
            start++;
            end++;
        }
    }
    return res;
}