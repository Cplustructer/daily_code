vector<int> preorderTraversal(TreeNode* root) {
	stack<TreeNode*> s;
	vector<int> res;
	while (!s.empty() || root != NULL){
		if (root != NULL){
			res.push_back(root->val);
			s.push(root);
			root = root->left;
		}
		else{
			root = s.top();       //上一步left走完循环后变为NULL，所以要将root置为栈顶元素
			s.pop();
			root = root->right;
		}
	}
	return res;
}