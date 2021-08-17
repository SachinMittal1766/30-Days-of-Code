
	void levelOrder(Node * root){
        std::queue<Node*> q;
        Node* c;
  
        if (root != NULL) {
            q.push(root);
        }
        
        while (!q.empty()) {
            c = q.front();
            q.pop();
            cout << c->data << " ";
            if (c->left!=NULL) q.push(c->left);
            if (c->right!=NULL) q.push(c->right);
        }
    }


