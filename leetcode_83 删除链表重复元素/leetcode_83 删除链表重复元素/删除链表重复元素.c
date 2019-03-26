//����:1->2->2->3->3->4
//���:1->2->3->4
//ɾ�������ظ�Ԫ�أ�ʹÿ��Ԫ�س���һ�Σ�ֻʵ�ֺ�������
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
