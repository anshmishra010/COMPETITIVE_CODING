/*
Given a number N having only one ‘1’ and all other ’0’s in its binary representation, find position of the only set bit.
 If there are 0 or more than 1 set bit the answer should be -1.
 Position of  set bit '1' should be counted starting with 1 from LSB side in binary representation of the number.
*/

/*
    int findPosition(int N) {
        // code here
        // O(log n)
        if(N==0) return -1;
        if((N & (N-1)) == 0) // this is used to check power of 2;
        {
            int counter =0;
            while(N)
            {
                counter++;
                N=N>>1;
                
            }
            return counter;
        }
        else return -1;
    }
    */
   
        int findPosition(int N) {
            // we can also do it using maths approach
            if(N==0) return -1;
            if((N & (N-1)) == 0)
            {
                int counter = log2(N) + 1;
                return counter;
            }
            else return -1;
        }