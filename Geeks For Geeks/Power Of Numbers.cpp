class Solution{
    public:
    //You need to complete this fucntion
    
    long long power(int N,int R)
    {
        //Your code here
        if(R == 1)
            return N;
        long long num = power(N, R/2);
        num = (num*num)%(1000000007);
        if(R%2 == 0)
            return num;
        else
            return (N*num)%(1000000007);
        
    }
    
    //   long long modfun(long long n, long long R)
    // {
    //     // Base cases 
    //     if (n == 0) 
    //         return 0; 
    //     // power zero mean answer is 1
    //     if (R == 0)  
    //         return 1; 
      
    //     long long y; 
    //     // If R is even 
    //     if (R % 2 == 0) { 
    //         // finding r/2 power as power is even then storing answer in y and if power is even like 2^4 we can simply do (2^2)*(2^2)
    //         y = modfun(n, R/2);  
    //         y = (y * y) % mod; 
    //     } 
      
    //     // If R is odd 
    //     else { 
    //         y = n % mod; 
    //         // reduce the power by 1 to make it even. The reducing power by one can be done if we take one n out. Like 2^3 can be written as 2*(2^2)
    //         y = (y * modfun(n, R - 1) % mod) % mod; 
            
    //     } 
    //     // finally return the answer (y+mod)%mod = (y%mod+mod%mod)%mod = (y%mod)%mod
    //     return ((y + mod) % mod);  
    // }
    
    
    // long long power(int N,int R)
    // {
    //     return modfun(N,R)%mod;
        
    // }
};