/*
You are given two strings order and s. All the words of order are unique and were sorted in some custom order previously.
Permute the characters of s so that they match the order that order was sorted. 
More specifically, if a character x occurs before a character y in order, then x should occur before y in the permuted string.
Return any permutation of s that satisfies this property.

Example 1:
Input: order = "cba", s = "abcd"
Output: "cbad"
Explanation: 
"a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 
Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.
*/


string temp;
bool compare(char a,char b)
{
    return temp.find(a) < temp.find(b);
}

class Solution {
public:
    string customSortString(string order, string s) {
        // custom competator
        temp =order;
        sort(s.begin(),s.end(),compare);
        return s;
    }
};

//------------------------------------------------------------

// using lamba func
class Solution
{
public:
    string customSortString(string order, string s)
    {
        // using lamba func
        sort(s.begin(), s.end(), [=](char a, char b)
             { return order.find(a) < order.find(b); });
        return s;
    }
};

/*
[&] / [=] meaning
You can use a capture-default mode to indicate how to capture any outside variables referenced in the lambda body:
 [&] means all variables that you refer to are captured by reference, and [=] means they're captured by value.
  You can use a default capture mode, and then specify the opposite mode explicitly for specific variables. 
*/