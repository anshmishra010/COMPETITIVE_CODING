/*
Given two polynomials represented by two arrays that contains the coefficients of poynomials, returns the polynomial in form of array formed after multiplication of given polynomials.


Example 1:

Input:
M = 4, N = 3
Arr1 = {1 , 0, 3, 2}
Arr2 = {2, 0, 4}
Output: {2, 0, 10, 4, 12, 8}
Explaination: 
First polynomial: 
1 + 0x1 + 3x2 + 2x3
Second polynomial: 
2 + 0x1 + 4x2
Product polynomial:
2 + 0x1 + 10x2 + 4x3 + 12x4 + 8x5
*/


class Solution{
    public:
    vector<int>polyMultiply(int Arr1[], int Arr2[], int M, int N)
    {
        // code here
        vector<int> res(M+N-1);
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                res[i+j] += Arr1[i] * Arr2[j];
            }
        }
        return res;
    }
};