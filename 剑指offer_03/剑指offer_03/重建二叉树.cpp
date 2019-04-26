/*����ĳ��������ǰ���������������Ľ�������ؽ����ö�������
���������ǰ���������������Ľ���ж������ظ������֡�
��������ǰ���������{1,2,4,7,3,5,6,8}�������������{4,7,2,1,5,3,8,6}�����ؽ������������ء�*/
class Solution {
public:
	TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
		return reConstruct(pre, vin);
	}
	TreeNode* reConstruct(const vector<int>& pre, const vector<int>& vin){
		if (pre.empty()){                      //�п�
			return NULL;
		}
		int rootvalue = pre[0];
		TreeNode* ptr = new TreeNode(rootvalue);      //��
		auto vindex = find(vin.begin(), vin.end(), rootvalue);     //���������ҵ�����λ��
		int leftsize = vindex - vin.begin();                      //��������������ռ�Ľ�����
		ptr->left = reConstruct(vector<int>(pre.begin() + 1, pre.begin() + 1 + leftsize),
			vector<int>(vin.begin(), vin.begin() + leftsize));//����������
		ptr->right = reConstruct(vector<int>(pre.begin() + 1 + leftsize, pre.end()),
			vector<int>(vin.begin() + leftsize + 1, vin.end()));//����������
		return ptr;
	}
};