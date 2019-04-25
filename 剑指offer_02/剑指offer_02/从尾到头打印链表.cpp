class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		ListNode* p = head;
		stack<int> s;                    //使用栈存贮正好就是逆序
		vector<int> res;                 //然后申请一个容器res存储结果数据
		while (p != NULL){
			s.push(p->val);
			p = p->next;
		}
		int len = s.size();
		for (int i = 0; i<len; i++){
			res.push_back(s.top());
			s.pop();
		}
		return res;
	}
};