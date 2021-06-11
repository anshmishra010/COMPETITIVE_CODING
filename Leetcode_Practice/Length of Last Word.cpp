class Solution {
public:
    int lengthOfLastWord(string s) {
        int sum =0;
        int len = s.size();
        
        for(int i=len -1; i>=0;--i)
        {
            if(s[i] != ' '){
                sum++;
            }
            // this means we encounter the space and if we have any value in sum then just return it
            else if(sum){
                return sum;
            }
        }
        return sum;

    }
};