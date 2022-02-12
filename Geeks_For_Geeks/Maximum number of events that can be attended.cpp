/*
There are N events in Geek's city. You are given two arrays start[] and end[] denoting starting and ending day 
of the events respectively. Event i starts at start[i] and ends at end[i].
You can attend an event i at any day d between start[i] and end[i] 
(start[i] ≤ d ≤ end[i]). But you can attend only one event in a day.
Find the maximum number of events you can attend.
*/

int maxEvents(int start[], int end[], int N) {
        vector<pair<int,int>> v(N);
        for(int i=0;i<N;i++){
            v[i].first = start[i];
            v[i].second = end[i];
        }
        sort(v.begin(),v.end());
       // first eg - (1,2) (1,2) (2,2)
        priority_queue<int, vector<int>, greater<int>> pq;
        int res=0,day=0,i=0;
        
        while(pq.size() > 0 or i < N){
            if(pq.size() == 0) day = v[i].first;
            
            while(i<N and v[i].first <= day){
                pq.push(v[i].second);
                i++;
            }
            day++,res++;
            pq.pop();
            
            while(pq.size() and pq.top()<day){
                pq.pop();
            }
        }
        return res;
    }