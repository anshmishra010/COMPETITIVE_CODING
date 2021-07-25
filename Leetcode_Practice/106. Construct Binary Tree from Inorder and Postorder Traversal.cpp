/*
Given two integer arrays inorder and postorder where inorder is the inorder traversal of a binary tree 
and postorder is the postorder traversal of the same tree, construct and return the binary tree.

Example 1:
Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
Output: [3,9,20,null,null,15,7]
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
        TreeNode* build(vector<int>& inorder,int i1, int i2, vector<int>& postorder,int p1, int p2){
            if(i1 >= i2 or p1 >= p2)return nullptr;
            TreeNode* root = new TreeNode(postorder[p2-1]); // last element of postorder is root node
            
            auto it = find(inorder.begin()+i1 , inorder.begin()+i2 , postorder[p2-1]); // finding the root element in inorder
            int diff = it - (inorder.begin() + i1); // as that portin will left part
            
            root->left = build(inorder, i1, i1+diff ,postorder ,p1,p1+diff);
//                                     start     end            start    end
            root->right = build(inorder, i1+diff+1, i2, postorder, p1+diff, p2-1);
            //                            start     end            start    end
            
            return root;
        }
public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        
        if(n == 0)return nullptr;
        //passing whole array
        return build(inorder,0,n,postorder,0,n);
    }
    
    
    // More optimised solution as we taking extra space , so the searching time in line 17 is cut out by using map
    
    class Solution {
public:
    unordered_map<int,int> mp;
    TreeNode* build(vector<int> &inorder, vector<int> &postorder, int inStrt, int inEnd, int * pIndex){
        if (inStrt > inEnd)
            return NULL;
        TreeNode* node = new TreeNode(postorder[*pIndex]);
        (*pIndex)--;

        if (inStrt == inEnd)
            return node;

        int iIndex = mp[node->val];

        node->right = build(inorder, postorder, iIndex + 1, inEnd, pIndex);
        node->left = build(inorder, postorder, inStrt, iIndex - 1, pIndex);

        return node;
    }
    TreeNode* buildTree(vector<int> &inorder, vector<int> &postorder) {
        int n = inorder.size();
        int pIndex = n-1;
        mp.clear();
        for(int i=0;i<n;i++){
            mp[inorder[i]] = i;
        }
        return build(inorder,postorder,0,n-1,&pIndex);
    }
};
};