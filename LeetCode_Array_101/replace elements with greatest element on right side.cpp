class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int m=-1;
        int l = arr.size();
        vector<int> res(l);
        res[l-1]=-1;
        int count=l-2;   
        for(int i=l-1;i>=0;i--){
            if(arr[i]>m){
                m=arr[i];
            }
            if(count>=0){
                res[count]=m;
            }
            count--;
        }
        return res;
        
    }
};