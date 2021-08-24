/*
A complex number can be represented as a string on the form "real+imaginaryi" where:
real is the real part and is an integer in the range [-100, 100].
imaginary is the imaginary part and is an integer in the range [-100, 100].
i2 == -1.
Given two complex numbers num1 and num2 as strings, return a string of the complex number that represents their multiplications.

Example 1:
Input: num1 = "1+1i", num2 = "1+1i"
Output: "0+2i"
Explanation: (1 + i) * (1 + i) = 1 + i2 + 2 * i = 2i, and you need convert it to the form of 0+2i.
*/

class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        pair<int,int> t1, t2;
        string temp;
        string res;
        int i=0, l1 = num1.length(), l2=num2.length();
        
        while(i<l1)
        {
            if(num1[i] != 'i' and num1[i] != '+'){
                temp.push_back(num1[i]);
            }
            else if(num1[i] == '+'){
                // stoi converts string into digit
                t1.first= stoi(temp);
                temp.clear();
            }
            else if(num1[i] == 'i'){
                t1.second = stoi(temp);
                temp.clear();
            }
            i++;
        }
        
        i=0;
        
        while(i<l2)
        {
            if(num2[i] != 'i' and num2[i] != '+'){
                temp.push_back(num2[i]);
            }
            else if(num2[i] == '+'){
                t2.first= stoi(temp);
                temp.clear();
            }
            else if(num2[i] == 'i'){
                t2.second = stoi(temp);
                temp.clear();
            }
            i++;
        }
        
        int real = t1.first * t2.first - t1.second* t2.second;
        int imag = t1.first * t2.second + t1.second * t2.first;
        
        res += to_string(real)+"+"+to_string(imag)+"i";
        return res;
        
        
    }
};