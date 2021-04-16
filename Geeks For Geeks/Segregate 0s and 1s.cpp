class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int type0 = 0;
        int type1 = n-1;
        while(type0 < type1)
        {
            if(arr[type0]==1 && arr[type1]==1)
            {
                type1--;
            }
            else if(arr[type0]==0 && arr[type1] ==1)
            {
                type0++;
            }
            else  if(arr[type0] ==1)
            {
                swap(arr[type0],arr[type1]);
                type1--;
            }
            else
            {
                type0++;
            }
            
        }
    }
};