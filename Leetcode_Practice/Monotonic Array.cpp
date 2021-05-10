// first approach
    bool isMonotonic(vector<int>& A) {
        
        bool m_d=true;
        bool m_i=true;
        int n=A.size();
        
        for(int i=0;i<n-1;i++){
            if(A[i]<A[i+1]){
                  m_i=false;
                }
            if(A[i]>A[i+1]){
                m_d=false;
            }
        }
        return m_i||m_d;
    }


// another approach
    bool isMonotonic(vector<int>& A) {
       vector<int> temp = A;
        sort(temp.begin(),temp.end());
        if(A == temp) return 1;
        reverse(temp.begin(),temp.end());
        if(A==temp) return 1;
        return 0;
    }