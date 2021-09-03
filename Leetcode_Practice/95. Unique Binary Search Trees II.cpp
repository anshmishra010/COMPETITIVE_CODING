/*
Given an integer n, return all the structurally unique BST's (binary search trees),
 which has exactly n nodes of unique values from 1 to n. Return the answer in any order.

Example 1:
Input: n = 3
Output: [[1,null,2,null,3],[1,null,3,2],[2,1,3],[3,1,null,null,2],[3,2,null,1]]
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> solve(int l, int r)
    {
        if(l > r) return {NULL};
        vector<TreeNode*> res;
        for(int root = l;root <= r; root++){
            vector<TreeNode*> lef = solve(l,root-1); // to store left part
            vector<TreeNode*> righ = solve(root+1,r); // to store right
            
            // forming the tree
            for(auto i : lef){
                for(auto j : righ){
                    TreeNode* temp = new TreeNode(root);
                    temp->left = i;
                    temp->right = j;
                    res.push_back(temp);
                }
            }
        }
        return res;
    }
    
    vector<TreeNode*> generateTrees(int n) {
        return solve(1,n);
    }
};