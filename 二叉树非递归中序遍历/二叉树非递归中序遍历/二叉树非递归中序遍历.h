class Solution {
public:                              //遍历顺序永远是左中右，所以就是中序遍历
	vector<int> inorderTraversal(TreeNode* root) {
		stack<TreeNode*> s;          //栈指针
		vector<int> res;             //动态数组res存放遍历结果
		TreeNode* p = root;            //二叉树根节点指针；
		while (p != NULL || !s.empty()){  //只要栈非空或者二叉树指针p不为空就循环
			while (p != NULL){
				s.push(p);           //一直遍历最左边的结点,直到为空
				p = p->left;
			}
			if (!s.empty()){          //最左边为空后就弹出父节点
				p = s.top();
				res.push_back(s.top()->val);
				s.pop();
				if (p != NULL){
					p = p->right;       //开始遍历父节点的右孩子的左孩子 
				}
			}
		}
		return res;
	}
};