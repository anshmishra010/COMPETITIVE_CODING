/*
Given a string arr consisting of lowercase english letters, arrange all its letters in lexicographical order using Counting Sort.

Example 1:

Input:
N = 5
S = "edsab"
Output:
abdes
Explanation: 
In lexicographical order, string will be 
abdes.
*/
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        // 256 is the max ascii value we can get
        int count[256] = {0};
        string res;
        int len = arr.length();
        for(int i=0;i<len;i++){
            count[arr[i]]++;
        }
        // we will arrange it
        // using for loop to iterate through the count arr;
        for(int i=0;i<256;i++){
            while(count[i]--){
                // converting the ascii into the char value
                res += (char)i;
            }
        }
        return res;
    }