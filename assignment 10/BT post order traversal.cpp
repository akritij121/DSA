void inOrder(Node *root) {
        if (root->left){
            inOrder(root->left);
        }
        std::cout << root->data<<" ";
        if (root->right){
            inOrder(root->right);
        }
    }
