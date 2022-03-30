/*
Given a binary search tree root, and integers lo and hi, return the count of all nodes in
 root whose values are between [lo, hi] (inclusive).

Constraints

n ≤ 100,000 where n is the number of nodes in root
*/
/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
// int solve(Tree* root, int lo, int hi) {
//     int count =0;
//     if(root == nullptr) return 0;
//     if(root->val >= lo and root->val <= hi) count++;
//     count += solve(root->left, lo, hi);
//     count += solve(root->right, lo , hi);
//     return count;
// }


class Solution {
    public:
    int count = 0;
    void inorder(Tree* root, int a, int b) {
        if (!root) return;
        inorder(root->left, a, b);
        if ((root->val) >= a && (root->val) <= b) {
            count++;
        }
        inorder(root->right, a, b);
    }
    int solve(Tree* root, int lo, int hi) {
        inorder(root, lo, hi);
        return count;
    }
};

int solve(Tree* root, int lo, int hi) {
    return (new Solution())->solve(root, lo, hi);
}