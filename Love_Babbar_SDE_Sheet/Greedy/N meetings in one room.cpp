/*
There is one meeting room in a firm. There are N meetings in the form of (S[i], F[i]) where S[i] is start time of meeting i and F[i] is finish time of meeting i.
What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time? Also note start time of one chosen meeting can't be equal to the end time of the other chosen meeting.


Example 1:

Input:
N = 6
S[] = {1,3,0,5,8,5}
F[] = {2,4,6,7,9,9}
Output: 
4
Explanation:
Four meetings can be held with
given start and end timings.
*/
//https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1#


public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    // we will be making a comparator to compare
    static bool comp(pair<int, int> a , pair<int, int> b)
    {
        if(a.second == b.second) return a.first< b.first;
        return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        // making a pair of start and end time of the meeting of  n size
        vector<pair<int, int>> v(n);
        for(int i=0;i<n;i++)
        {
            v[i] = {start[i],end[i]};
            
        }
        sort(v.begin(), v.end(), comp);
        
        int i=0;
        int j=1;
        int meet =1;
        
        while(j<n)
        {
            if(v[i].second < v[j].first)
            {
                meet++;
                i=j;
                j++;
            }
            else{
                j++;
            }
        }
        return meet;
    }
};