/*
Given two strings A and B, find the minimum number of times A has to be repeated such that B becomes a substring of the repeated A. If B cannot be a substring of A no matter how many times it is repeated, return -1.

Example 1:

Input: A = "abcd", B = "cdabcdab"
Output: 3
Explanation: After repeating A three times, 
we get "abcdabcdabcd".
*/
int repeatedStringMatch(string A, string B) 
   {
       // Your code goes here
       string s=A;
       if(A.find(B)!=string::npos) return 1;
       
       int count=B.size()/A.size()+2;
       
       for(int i=2;i<=count;i++){
           s+=A;
           if(s.find(B)!=string::npos)
           return i;
       }
       return -1;
   }