#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> arr;
        
        for(int i=0;i<A.size();i++){
            if(A[i]%2==0){
                arr.push_back(A[i]);
            }
            
        }
        for(int i=0;i<A.size();i++){
            if(A[i]%2!=0){
                arr.push_back(A[i]);
            }
            
        }
        
        
        return arr;
        
    }
};