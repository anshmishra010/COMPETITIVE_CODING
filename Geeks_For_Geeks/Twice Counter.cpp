/*
Given a list of N words. Count the number of words that appear exactly twice in the list.

Example 1:

Input:
N = 3
list = {Geeks, For, Geeks}
Output: 1
Explanation: 'Geeks' is the only word that 
appears twice. 
*/        
        
        
        
int countWords(string list[], int n)
{
    //code here.
    unordered_map<string,int> um;
    for(int i=0;i<n;i++){
        um[list[i]]++;
    }
    int counter=0;
    for(auto j : um){
        if(j.second == 2){
            counter++;
        }
    }
    return counter;
    
}