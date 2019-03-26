//输入:1->2->2->3->3->4
//输出:1->2->3->4
//删除链表重复元素，使每个元素出现一次，只实现函数部分
struct ListNode* deleteDuplicates(struct ListNode* head) {
	if (head == NULL || head->next == NULL)
	{
		return head;
	}
	struct ListNode* cur = head;
	while (cur != NULL && cur->next != NULL)
	{
		if ((cur->val) == ((cur->next)->val))
		{
			cur->next = cur->next->next;
		}
		else
		{
			cur = cur->next;
		}
	}
	return head;
}
