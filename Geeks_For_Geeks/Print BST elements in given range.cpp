/*
Given a Binary Search Tree and a range [low, high]. Find all the numbers in the BST that lie in the given range.
Note: Element greater than or equal to root go to the right side.

Example 1:

Input:
       17
     /    \
    4     18
  /   \
 2     9 
l = 4, h = 24
Output: 4 9 17 18 
*/

class Solution {
  public:
  // using inorder traversal, as we have to print in sorted order
  void solve(Node* root, int low, int high , vector<int> &res)
  {
      if(root == NULL)return;
      solve(root->left,low, high,res);
      if(root->data >= low and root->data <= high)
      {
          res.push_back(root->data);
      }
      solve(root->right,low,high,res);
  }
    vector<int> printNearNodes(Node *root, int low, int high) {
        //code here   
        vector<int>res;
        solve(root, low, high, res);
        return res;
    }
};