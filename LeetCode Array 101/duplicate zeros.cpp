
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                 arr.insert(arr.begin()+i+1,0);
                 arr.pop_back();
                 i++;
            }
        }   
    }
};
// this solution only worked because we are using the vector , if we have used an array then POP_BACK function won't work as array is of fixed size and vector can expand.