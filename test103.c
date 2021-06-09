typedef struct ListNode {
	int val;
	struct ListNode *next;
}Node;
Node* deleteNode(Node* head, int val)
{
	Node* cur = head;
	Node* newHead = head;
	Node* prev = NULL;
	while (cur)
	{
		if (cur == newHead && cur->val == val)
		{
			prev = cur->next;
			free(cur);
			cur = prev;
			newHead = cur;
		}
		else if (cur->val == val)
		{
			prev->next = cur->next;
			free(cur);
			cur = prev;
		}
		else
		{
			prev = cur;
			cur = cur->next;
		}
	}
	return newHead;
}
int main()
{
	int val = 6;
	struct ListNode* n1 = malloc(sizeof(struct ListNode));
	n1->val = 6;
	struct ListNode* n2 = malloc(sizeof(struct ListNode));
	n2->val = 6;
	struct ListNode* n3 = malloc(sizeof(struct ListNode));
	n3->val = 6;
	struct ListNode* n4 = malloc(sizeof(struct ListNode));
	n4->val = 6;
	struct ListNode* n5 = malloc(sizeof(struct ListNode));
	n5->val = 6;
	struct ListNode* n6 = malloc(sizeof(struct ListNode));
	n6->val = 6;
	struct ListNode* n7 = malloc(sizeof(struct ListNode));
	n7->val = 6;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n7;
	n7->next = NULL;
	struct ListNode* head = deleteNode(n1,val);
	while (head)
	{
		printf("%d->", head->val);
		head = head->next;
	}
	printf("NULL\n");
	return 0;
}