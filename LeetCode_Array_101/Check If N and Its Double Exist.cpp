class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
                if(arr[i]==arr[j]*2 && i!=j){
                    return 1;
                }
            }
        }
        return 0;
        
    }
};