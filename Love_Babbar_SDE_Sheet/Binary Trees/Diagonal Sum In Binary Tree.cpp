/*
Consider Red lines of slope -1 passing between nodes (in following diagram). 
The diagonal sum in a binary tree is the sum of all node’s data lying between these lines.
 Given a Binary Tree of size N, print all diagonal sums.
*/
//https://practice.geeksforgeeks.org/problems/diagonal-sum-in-binary-tree/1/?category[]=Recursion&category[]=Recursion&problemStatus=unsolved&difficulty[]=0&page=1&query=category[]RecursionproblemStatusunsolveddifficulty[]0page1category[]Recursion#



void sum(Node* root, map<int,int>&mp, int level){
    if(root == NULL)
    {
        return;
    }
    mp[level] = mp[level] + (root->data); // adding the sum to the map at that level
    sum(root->left,mp, level+1);
    sum(root->right,mp,level);
}


vector <int> diagonalSum(Node* root) {
    // Add your code here
    vector<int> res;
    map<int,int> mp;
    sum(root, mp , 0);
    
    for(auto i = mp.begin();i != mp.end();i++){
        res.push_back(i->second);
    }
    return res;
}