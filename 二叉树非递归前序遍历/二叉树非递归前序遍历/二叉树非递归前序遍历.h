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
			root = s.top();       //��һ��left����ѭ�����ΪNULL������Ҫ��root��Ϊջ��Ԫ��
			s.pop();
			root = root->right;
		}
	}
	return res;
}