/*
Given a parent array arr[] of a binary tree of N nodes. Element at index i in the array 
arr[] represents the parent of ith node, i.e, arr[i] = parent(i). Find the height of this
 binary tree.
Note: There will be a node in the array arr[], where arr[i] = -1, which means this node is 
the root of binary tree.

Example 1:

Input: N = 7
arr = {-1, 0, 0, 1, 1, 3, 5}
Output: 5
Explanation: Tree formed is:
                    0
                   / \
                  1   2
                 / \
                3   4
               /
              5
             /
            6      Height of the tree= 5
*/
// iterative way.
  int findHeight(int N, int arr[]){
        int h=1, a=arr[N-1];
        while(arr[a]!=-1){
            a=arr[a]; // we will just take the next step to the array element present at that index.
            h++;
        }
        return h+1;
    }
    
    // in recursive way
      int findHeight(int N, int arr[]){
          int height=0;
          calheight(arr,height,N-1);
          return height;
      }
      void calheight(int arr[], int &height, int ptr)
      {
          if(ptr == -1) return; // we have reached to the first index.
          height++;
          calheight(arr,height,arr[ptr]);// we will just take the next step to the array element present at that index.
      }