/*
Professor McGonagall teaches transfiguration at Hogwarts. She has given Harry the task of changing himself into a cat. She explains that the trick is to analyze your own DNA and change it into the DNA of a cat. The transfigure spell can be used to pick any one character from the DNA string, remove it and insert it in the beginning. 
Help Harry calculates minimum number of times he needs to use the spell to change himself into a cat.

Example 1:

Input: 
A = "GEEKSFORGEEKS" 
B = "FORGEEKSGEEKS"
Output: 3
Explanation:The conversion can take place 
in 3 operations:
1. Pick 'R' and place it at the front, 
   A="RGEEKSFOGEEKS"
2. Pick 'O' and place it at the front, 
   A="ORGEEKSFGEEKS"
3. Pick 'F' and place it at the front, 
   A="FORGEEKSGEEKS"
*/
#include<bits10_1.h>/stdc++.h>
using namespace std;
int main()
int transfigure (string A, string B)
    {
    	Your code goes here
    	unordered_map<char,int> m1, m2;
    	
    	if(A.size() != B.size()) return -1;
    	int n = A.size();
    	for(int i=0;i<n;i++){
    	    m1[A[i]]++, m2[B[i]]++;
    	}
    	for(int i=0;i<n;i++){
    	    char temp = A[i]; // as we have to check whether the freq is equal or not 
    	    if(m1[temp] != m2[temp]) return -1;
    	}
    	int m = n-1, res=0;
    	for(int i=n-1;i>=0;i--){
    	    if(A[i] == B[m]){
    	        m--;
    	    }
    	    else res++;
    	}
    	return res;
    }