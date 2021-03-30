public:
    bool func(int n)
    {
        int var;
        int A[10]={0};
        while(n)
        {
            var = n%10;
            A[var]++;
            n=n/10;
        }
        for(int i=0;i<10;i++) if(A[i]>1) return 0;
    
        return 1;
        
    }
    vector<int> uniqueNumbers(int L,int R)
    {
        // Write Your Code here
        vector<int> res;
        for(int i=L;i<R+1;i++){
            if(func(i)) res.push_back(i);
        }
        return res;
    }
};