Node* copyRandomList(Node* head) {
	if (head == NULL)
	{
		return NULL;
	}
	//1.���θ����½�㣬���뵽�ɽ����
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
	//2.���ݾɽ�����½���random
	cur = head;
	while (cur != NULL)
	{
		if (cur->random != NULL)
		{
			cur->next->random = cur->random->next;
		}
		cur = cur->next->next;
	}
	//3.�������ɾɺ���
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
	//������������ĵ�һ�����
	return newhead;
}