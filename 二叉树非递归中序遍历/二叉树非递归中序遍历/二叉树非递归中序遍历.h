class Solution {
public:                              //����˳����Զ�������ң����Ծ����������
	vector<int> inorderTraversal(TreeNode* root) {
		stack<TreeNode*> s;          //ջָ��
		vector<int> res;             //��̬����res��ű������
		TreeNode* p = root;            //���������ڵ�ָ�룻
		while (p != NULL || !s.empty()){  //ֻҪջ�ǿջ��߶�����ָ��p��Ϊ�վ�ѭ��
			while (p != NULL){
				s.push(p);           //һֱ��������ߵĽ��,ֱ��Ϊ��
				p = p->left;
			}
			if (!s.empty()){          //�����Ϊ�պ�͵������ڵ�
				p = s.top();
				res.push_back(s.top()->val);
				s.pop();
				if (p != NULL){
					p = p->right;       //��ʼ�������ڵ���Һ��ӵ����� 
				}
			}
		}
		return res;
	}
};