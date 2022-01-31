/*
Given a binary tree and a node, print all cousins of given node in order of their 
appearance. Note that siblings should not be printed.

Example 1:

Input : 
             1
           /   \
          2     3
        /   \  /  \
       4    5  6   7

Given node : 5
Output : 6 7
*/

vector<int> printCousins(Node* root, Node* node_to_find)
    {
        //code here
        //we will be using dfs / level order traversal
        vector<int> res;
        queue<Node*> q;
        q.push(root);
        bool check = false;
        
        while(!q.empty())
        {
            int sz = q.size();
            while(sz--)
            {
                Node* temp = q.front();
                q.pop();
                
                if(temp->left == node_to_find or temp->right == node_to_find) check = true;
                else
                {
                    if(temp->left) q.push(temp->left);
                    if(temp->right) q.push(temp->right);
                }
            }
            if(check)
            {
                while(!q.empty())
                {
                    res.push_back(q.front()->data);
                    q.pop();
                }
                break;
            }
        }
        if(res.empty()) res.push_back(-1);
        return res;
    }