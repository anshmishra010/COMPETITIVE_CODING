/*
Given a binary tree, print the bottom view from left to right.
A node is included in bottom view if it can be seen when we look at the tree from bottom.

                      20
                    /    \
                  8       22
                /   \        \
              5      3       25
                    /   \      
                  10    14

For the above tree, the bottom view is 5 10 3 14 25.
If there are multiple bottom-most nodes for a horizontal distance from root, then print the later one in level traversal. For example, in the below diagram, 3 and 4 are both the bottommost nodes at horizontal distance 0, we need to print 4.

                      20
                    /    \
                  8       22
                /   \     /   \
              5      3 4     25
                     /    \      
                 10       14
*/

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        queue<pair<Node*,int>> q;
        map<int,int> mp;
        vector<int>v;
        if(root == NULL)return v;
        q.push({root,0});
        
        while(!q.empty())
        {
            Node* temp = q.front().first;
            int height = q.front().second;
            q.pop();
            
            mp[height] = temp->data;
            
            if(temp->left)q.push({temp->left,height-1});
            if(temp->right) q.push({temp->right,height+1});
        }
        for(auto it : mp) v.push_back(it.second);
        return v;
    }
};