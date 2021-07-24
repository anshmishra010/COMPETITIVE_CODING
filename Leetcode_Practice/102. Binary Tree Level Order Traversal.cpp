/*
Given the root of a binary tree,return the level order traversal of its nodes' values. 
(i.e., from left to right, level by level).
*/

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res;
        queue<TreeNode*> q;
        
        if(root) q.push(root);
        
        while(!q.empty())
        {
            int len = q.size();
            vector<int> level; // for storing the value per level
            
            for(int i=0;i<len;i++){
                TreeNode* temp = q.front();
                level.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
                
                q.pop();
            }
            res.push_back(level);
        }
        return res;
    }
};