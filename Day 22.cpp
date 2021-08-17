	int getHeight(Node* root){
          //Write your code here
          if(root==NULL)
          return -1;
          
          return (max(getHeight(root->left), getHeight(root->right) )+ 1);
        }
