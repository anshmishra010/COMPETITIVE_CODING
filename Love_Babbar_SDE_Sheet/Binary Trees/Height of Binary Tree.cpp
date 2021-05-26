    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node == NULL){
            return 0;
        }
        else
        {
            int lh  = height(node->left);
            int rh = height(node->right);
           if(lh>rh){
               return(lh+1);
           }
           else{
               return (rh+1);
           }
            
        }

    }
};
/*
in short
if(node == null)
{
    return 0;
}
int l = height(node->left);
int r = height(node->right);
return max(l+r)+1;
*/