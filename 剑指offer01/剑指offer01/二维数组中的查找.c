/*在一个二维数组中（每个一维数组的长度相同），
每一行都按照从左到右递增的顺序排序，每一列都按照从上到下递增的顺序排序。
请完成一个函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
*/
class Solution {
public:
	bool Find(int target, vector<vector<int> > array) {
		int row = array.size();			//查找要么从左下方开始要么从右上方开始，原理自己想明白
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