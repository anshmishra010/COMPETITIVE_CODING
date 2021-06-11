/*
Given a string s of lowercase alphabets and a number k, the task is to print the minimum value of the string after removal of ‘k’ characters. The value of a string is defined as the sum of squares of the count of each distinct character.
 

Example 1:

Input: s = abccc, k = 1
Output: 6
Explaination:
We remove c to get the value as 12 + 12 + 22
*/
//https://practice.geeksforgeeks.org/problems/game-with-string4100/1/?category[]=Heap&category[]=Heap&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]HeapproblemStatusunsolveddifficulty[]0page1category[]Heap#




int minValue(string s, int k){
        // code here
        
        // we will be making a hash table or map to store the frequencey of the char
        // we will be using max priority queue or max heap
        
        map<int,int> mp;
        priority_queue<int> pq;
        int n = s.size();
        
        // inserting value in map with frequency
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        
        //inserting the frequency of the char in pq
        for(auto it = mp.begin(); it != mp.end() ;it++)
        {
            pq.push(it-> second);
        }
        
        // now we will subtract the value and main operation
        while(!pq.empty() and k)
        {
            // taking the top of the queue
            // as it is a priority queue and it has max freq on top
            int fq = pq.top();
            pq.pop();
            pq.push(fq-1);
            k--;
        }
        int sum =0;
        while(!pq.empty())
        {
            int temp = pq.top();
            pq.pop();
            sum += temp*temp;
        }
        return sum;
        
    }