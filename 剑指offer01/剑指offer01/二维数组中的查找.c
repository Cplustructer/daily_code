/*��һ����ά�����У�ÿ��һά����ĳ�����ͬ����
ÿһ�ж����մ����ҵ�����˳������ÿһ�ж����մ��ϵ��µ�����˳������
�����һ������������������һ����ά�����һ���������ж��������Ƿ��и�������
*/
class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		int row = array.size();			//����Ҫô�����·���ʼҪô�����Ϸ���ʼ��ԭ���Լ�������
		int col = array[0].size();
		int i = row - 1;
		int j = 0;
		while (i >= 0 && j<col){
			if (target<array[i][j]){
				i--;
			}
			else if (target>array[i][j]){
				j++;
			}
			else
				return true;
		}
		return false;
	}
};