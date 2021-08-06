/*
Given an n-ary tree, return the level order traversal of its nodes' values.
Nary-Tree input serialization is represented in their level order traversal, each group of children is separated by the null value (See examples).

Example 1:
Input: root = [1,null,3,2,4,null,5,6]
Output: [[1],[3,2,4],[5,6]]
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        queue<Node*> q;

        if(root == NULL) return res;

        q.push(root);
        vector<int> temp = {root->val};
        res.push_back(temp);
        
        while(!q.empty())
        {
            temp.clear();
            int level = q.size();

            while(level--)
            {
                Node* cur = q.front();
                q.pop();
                for(auto it: cur->children){
                    temp.push_back(it->val);
                    q.push(it);
                }
            }
            
            if(temp.empty())continue;
            res.push_back(temp);
        }
        return res;
        
    }
};