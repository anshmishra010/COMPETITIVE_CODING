/*
Given a number N, the task is find the number of ways to represent this number as a 
sum of 2 or more consecutive natural numbers.

 

Example 1:

Input:
N = 10
Output:
1
Explanation:
10 can be reprsented as sum of two or
more consecutive numbers in only one
way. 10 = 1+2+3+4.
*/

    int getCount(int N) {
        // code here
        
        /*
        int count =0,start,end,sum;
        for(int i=1;i<N-1;i++){
            start=i;
            end = start+1;
            sum = start+end;
            while(sum <N){
                end +=1;
                sum +=end;
            }
            if(sum == N){
                count +=1;
            }
        }
        return count;
        */
        
        /*
        
        // another approach we can do prefix sum, but it won't submit 
        // as we are using extra space.
        vector<int> temp;
        temp[0]=0;
        int count =0;
        for(int i=1;i<N;i++){
            temp.push_back(temp[i-1] +i);
        }
        for(int it : temp){
            if(find(temp.begin(),temp.end(),it-N) != temp.end()){
                count +=1;
            }
        }
        return count;
        */
        long long int sum =0, count=0, chain_len =0;
        while(sum <  N){
            chain_len +=1;
            sum +=chain_len;
        }
        for( int i=1;i<=chain_len;i++){
            double x = (N*1.0 -i*(i+1)/2)/(i+1);
            if(x > 0 and x == (int)x){
                count++;
            }
        }
        return count;
        

        
    }
};