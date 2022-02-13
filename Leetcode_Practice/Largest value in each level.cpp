/*
Given the root of a binary tree, return an array of the largest value in each row of the 
tree (0-indexed).
*/


class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        queue<pair<TreeNode*,int>> q;
        if(root == nullptr)return res;
        q.push({root,0});
        
        while(!q.empty())
        {
            TreeNode* temp = q.front().first;
            int level = q.front().second;
            q.pop();
            
            // here we are first pushing back first element on that row;
            if(res.size() < level +1){
                res.push_back(temp->val);
            }
            else{
                // here we will be checking other elements of the same row, which is maximum and if we found other element to be max then we will replace it.
                
                res[level] = max(res[level],temp->val);
            }
            
            if(temp->left) q.push({temp->left, level +1});
            
            if(temp->right) q.push({temp->right,level+1});
        }
        return res;
    }
};