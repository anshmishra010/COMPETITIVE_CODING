
class Solution {
public:
    /*
    Iterative way using queue
    
    vector<int> rightSideView(TreeNode* root) {
        //level order traversal + preorder traversal
        vector<int> res;
        queue<TreeNode*> q;
        if(root == NULL) return res;
        q.push(root);
        
        while(!q.empty())
        {
            int n = q.size();
            for(int i=1;i<=n;i++){
                TreeNode* temp = q.front();
                q.pop();
                
                if(i == 1) res.push_back(temp->val);
                if(temp->right) q.push(temp->right);
                if(temp->left) q.push(temp->left);
            }
        }
        return res;
        
    }
    */
   
    //Recursive 
    
    void recursion(TreeNode* root, int level ,vector<int> &res){
        if(root == NULL) return;
        if(level >= res.size()) res.push_back(root->val);
        recursion(root->right, level+1,res);
        recursion(root->left, level+1,res);
        
    }
    
     vector<int> rightSideView(TreeNode* root) {
            vector<int> res;
            recursion(root,0,res);
            return res;
        }
    
};