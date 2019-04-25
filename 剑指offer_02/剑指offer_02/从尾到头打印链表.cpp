class Solution {
public:
	vector<int> printListFromTailToHead(ListNode* head) {
		ListNode* p = head;
		stack<int> s;                    //ʹ��ջ�������þ�������
		vector<int> res;                 //Ȼ������һ������res�洢�������
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