class Solution {
public:
    int reverse(int x) {
        long long int rn =0;
        if(x/10==0){
            return x;
        }
        while(x)
        {
            rn = rn*10 + x%10;
            x=x/10;
        }
        return (rn<INT_MIN || rn>INT_MAX)?0 : rn;
    }
};