/*
Write an efficient program to print all the duplicates and their counts in the input string 

https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
*/

#include<bits/stdc++.h>
using namespace std;

void duplicate(string str)
{
    map<int, int> mp;
    for(int i =0;i<str.length(); i++){
        count[str[i]]++;
    }

    for(auto it : mp){
        if(it.second > 1){
            cout<<it.first<<" count = "<<it.second<<endl;
        }
    }

}
int main()
{
    string str = "test the tower"
    duplicate(str);
    return 0;
}