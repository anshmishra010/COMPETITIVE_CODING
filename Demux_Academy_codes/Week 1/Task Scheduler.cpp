/*
Given a characters array tasks, representing the tasks a CPU needs to do, where each letter represents a different task. Tasks could be done in any order. Each task is done in one unit of time. For each unit of time, the CPU could complete either one task or just be idle.

However, there is a non-negative integer n that represents the cooldown period between two same tasks (the same letter in the array), that is that there must be at least n units of time between any two same tasks.

Return the least number of units of times that the CPU will take to finish all the given tasks.

 

Example 1:

Input: tasks = ["A","A","A","B","B","B"], n = 2
Output: 8
Explanation: 
A -> B -> idle -> A -> B -> idle -> A -> B
There is at least 2 units of time between any two same tasks.
*/

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        //will be using unordered map and priority queue (max heap)
        
        // for storing the value, occurence
        unordered_map<char,int> um;
        for(auto t: tasks ){
            um[t]++;
        }
        
        // for storing the occurence of the alphabhet
        priority_queue<int> pq;
        for(auto p : um){
            pq.push(p.second);
        }
        
        int res =0;
        
        while(!pq.empty())
        {
            int time =0;
            vector<int> temp;
            
            for(int i=0;i<n+1; ++i)
            {
                 
                if(!pq.empty())
                    {
                        // we will decrease the initial occ , as we will use it in task
                        temp.push_back(pq.top() - 1);
                        pq.pop();
                        time++;
                    }
            }
            
             for(auto x: temp)
             {
                if(x)
                {
                    pq.push(x);
                }  
            }
            res += pq.empty() ? time : n+1;

        }

        return res;
    }
};



/*
class Solution {
public:
    int cnt[26], maxcnt = 0, e = 0;
    int leastInterval(vector<char>& tasks, int n) {
        for (char c : tasks) cnt[c-'A']++;
        for (int i = 0; i < 26; i++) maxcnt = max(maxcnt, cnt[i]);
        for (int i = 0; i < 26; i++) 
            if (cnt[i] == maxcnt) e++;
        return max((int)tasks.size(), (maxcnt-1)*(n+1) + e);
    }
};
*/