/*
Given an even number N (greater than 2), return two prime numbers whose sum will be equal 
to given number. There are several combinations possible. Print only the pair whose 
minimum value is the smallest among all the minimum values of pairs and print the minimum 
element first.
*/

    vector<int> primeDivision(int N){
        vector<int> res;
        vector<bool> seive(N,1);
        seive[0]=false, seive[1]= false;
        
        for(int i=2;i*i<N;i++){
            if(seive[i] == true){
                // if we have to mark the multiples as false, becasue multiple can never become prime
                for(int multiple = i*i; multiple<N;multiple+=i) seive[multiple] = false;
            }
        }
        
        for(int i=2;i<N;i++){
            if(seive[i] and seive[N-i]){
                res.push_back(i);
                res.push_back(N-i);
            }
        }
        return res;
    }