class Solution{
public:
    int isPossible(int N, int arr[]){
        // code here
        int sum =0;
        sum = accumulate(arr,arr+N,0);
        if(sum%3 == 0){
            return 1;
        }
        else return 0;
    }
};