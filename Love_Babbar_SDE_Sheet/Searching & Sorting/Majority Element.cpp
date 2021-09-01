/*
Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

Example 1:

Input:
N = 3 
A[] = {1,2,3} 
Output:
-1
Explanation:
Since, each element in 
{1,2,3} appears only once so there 
is no majority element.
*/

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        // brute force approach  using extra space !
        /*
           map<int,int> mp;
            for(int i=0;i<size;i++){
                mp[a[i]]++;
            }
            for(auto it : mp){
                if(it.second > (size/2)){
                     return it.first;   
                }
            }
            return -1;
            */
            
            // Moore voting algo
            int count =0;
            int maj =0;
            for(int i=0;i<size;i++){
                if(count == 0) maj = a[i];
                if(maj == a[i]) count++;
                else count --;
            }
            
            // for  checking the n/2 condition
            count =0; // for storing the new count, though we can use new variable also
            for(auto i=0;i<size;i++){
                if(maj == a[i]){
                    count++;
                }
            }
            return count>size/2 ? maj : -1;
            
            // if(count > size/2) return maj;
            // else return -1;
        
    }
};