Node* Find(Node* root, char v){
	if (root == NULL){
		return;
	}
	if (root->val == v){
		return root;
	}
	Node* p = Find(root->left,v);
	if (p != NULL){
		return p;
	}
	Node* q = Find(root->right, v); 
	if (q != NULL){
		return q;
	}
	return NULL;
}

void LevelOrder(Node* root)
{
	std::queue<Node*> queue;
	queue.push(root);
	if (root == NULL){
		return;
	}
	while (!queue.empty()){
		Node* node = queue.font();
		queue.pop();
		printf("%c",node->val);
		if (root->left != NULL){ queue.push(root->left); }
		if (root->right != NULL){ queue.push(root->right); }
		}
	}

}

