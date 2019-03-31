Node* copyRandomList(Node* head) {
	if (head == NULL)
	{
		return NULL;
	}
	//1.依次复制新结点，插入到旧结点后边
	Node* cur = head;
	while (cur != NULL)
	{
		Node* newnode = (Node*)malloc(sizeof(Node));
		newnode->val = cur->val;
		newnode->next = cur->next;
		newnode->random = NULL;
		cur->next = newnode;
		cur = cur->next->next;
	}
	//2.根据旧结点找新结点的random
	cur = head;
	while (cur != NULL)
	{
		if (cur->random != NULL)
		{
			cur->next->random = cur->random->next;
		}
		cur = cur->next->next;
	}
	//3.把链表拆成旧和新
	cur = head;
	Node* newhead = head->next;
	while (cur != NULL)
	{
		Node* p = cur->next;
		cur->next = p->next;
		if (p->next != NULL)
		{
			p->next = p->next->next;
		}
		cur = cur->next;
	}
	//返回新联链表的第一个结点
	return newhead;
}