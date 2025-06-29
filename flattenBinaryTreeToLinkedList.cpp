class Solution {
  public:
    void flatten(Node *root) {
        Node*curr=root;
        while(curr){
            if(curr->left){
                Node*temp=curr->left;
                while(temp->right){
                    temp=temp->right;
                }
                temp->right=curr->right;
                curr->right=curr->left;
                curr->left=NULL;
            }
            curr=curr->right;
        }
        
    }
};
