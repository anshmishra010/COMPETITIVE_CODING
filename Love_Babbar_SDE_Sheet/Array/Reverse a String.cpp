/*
You are given a string s. You need to reverse the string.

Example 1:

Input:
s = Geeks
Output: skeeG
*/
string reverseWord(string str){
    
  //Your code here
    
    //commented code won't work,though it's right

//   string res="";
//   for(int i=str.size();i>=0;i--)
//   {
//       res.push_back(str[i]);
//   }
//   return res;

     int start =0;
     int end = str.length()-1;
     while(start<end)
     {
         swap(str[start],str[end]);
         start++;
         end--;
     }
     return str;
     
}