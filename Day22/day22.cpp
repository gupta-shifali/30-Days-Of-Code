		int getHeight(Node* root){
          //Write your code here
            if(root == NULL)
                return -1;
            else
                return 1 + max(getHeight(root->left), getHeight(root->right));
        }
