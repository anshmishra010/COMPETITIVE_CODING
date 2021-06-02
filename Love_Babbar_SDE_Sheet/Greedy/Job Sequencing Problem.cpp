/*
Given a set of N jobs where each job i has a deadline and profit associated to it. Each job takes 1 unit of time to complete and only one job can be scheduled at a time. We earn the profit if and only if the job is completed by its deadline. The task is to find the maximum profit and the number of jobs done.

Note: Jobs will be given in the form (Job id, Deadline, Profit) associated to that Job.

https://practice.geeksforgeeks.org/problems/job-sequencing-problem-1587115620/1#
*/


class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool comparison(Job a , Job b){
        return(a.profit> b.profit);
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 

        // sorting the array of jobs
        // in descending order of profit
        // using own comparison as we want in descending
        sort(arr,arr+n,comparison);
        
        // now array is sorted in descending order
        // so we will finding max of job id to make the array of the job        
        int maxi = arr[0].dead;
        for(int i=1;i<n;i++){
            //traversing through the array for finding max job id
            maxi = max(maxi, arr[i].dead);
        }
        
        //now we got the max job id , so making the array of that limit
        int slot[maxi+1];
        for(int i=0;i<= maxi;i++){
            //now will be filling the array with -1
            slot[i] =-1;
        }
        
        int cjob=0, prof =0;
        
        // now we will traversing through job id's
        // as the profit is sorted in the descending order
        // so we will be taking first job id , as it will have the max profit
        for(int i=0;i<n;i++){
            // we will be adding the job id in the last day 
            // so we are traversing from backwards
            for(int j = arr[i].dead ; j>0 ; j--){
                if(slot[j] ==-1){
                    slot[j] =i;
                    cjob++;
                    prof += arr[i].profit;
                    break;
                    
                }
            }
        }
        return {cjob,prof};
    } 
    
};