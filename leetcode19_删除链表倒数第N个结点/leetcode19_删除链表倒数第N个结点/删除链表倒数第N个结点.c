//删除链表倒数第N个结点，只写出函数部分
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
	struct ListNode* back = (struct ListNode*)malloc(sizeof(struct ListNode));
	back->next = head;
	struct ListNode* beh = back;
	struct ListNode* front = back;
	for (int i = 1; i <= n + 1; i++)
	{
		front = front->next;
	}
	while (front != NULL)
	{
		front = front->next;
		beh = beh->next;
	}
	// struct ListNode* ptr = beh->next;
	beh->next = beh->next->next;
	//free(ptr);
	//  free(back);
	return back->next;
}