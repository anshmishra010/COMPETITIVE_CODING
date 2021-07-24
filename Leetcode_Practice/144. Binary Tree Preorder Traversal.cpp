
class Solution
{
public:
    /*
    Recursive way
    
    vector<int> res;
    void preorder(TreeNode* root){
       if(root == NULL){
            return;
        }
        res.push_back(root->val);
        preorder(root->left);
        preorder(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        preorder(root);
        return res;
    }
    */

    /*
    Using Stack Iterative
    
     vector<int> preorderTraversal(TreeNode* root) {
         vector<int> res;
         stack<TreeNode*> st;
         if(root == NULL){
             return res;
         }
         st.push(root);
         
         while(!st.empty())
         {
             TreeNode* curr = st.top();
             st.pop();
             res.push_back(curr->val);
             if(curr->right){
                 st.push(curr->right);
             }
             if(curr->left){
                 st.push(curr->left);
             }
         }
         return res;
     }   
     */

    //Morris Traversal O(N) -Tc and SC - O(1)

    vector<int> preorderTraversal(TreeNode *root)
    {
        vector<int> res;
        if (root == NULL)
        {
            return res;
        }
        TreeNode *cur = root;

        while (cur)
        {
            if (cur->left == NULL)
            {
                res.push_back(cur->val);
                cur = cur->right;
            }
            else
            {
                TreeNode *pre = cur->left;

                while (pre->right and pre->right != cur)
                {
                    // trying to get to the last rightmost part
                    pre = pre->right;
                }
                if (pre->right == cur)
                {
                    // this statement will get true at the end when everything is in leftree's tree right part
                    pre->right = NULL;
                    cur = cur->right;
                }
                else
                {
                    // here mainly we are shifting the right subtree to the left subtree's right part
                    res.push_back(cur->val);
                    pre->right = cur;
                    cur = cur->left;
                }
            }
        }
        return res;
    }
};