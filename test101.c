struct ListNode {
	int val;
	struct ListNode *next;
};
struct ListNode* ReverseList(struct ListNode* pHead) {
	// write code here
	struct ListNode* prev = NULL;
	if (pHead->next == NULL || pHead == NULL)
	{
		return pHead;
	}
	else
	{
		struct ListNode* cur = pHead;
		while (cur)
		{
			struct ListNode* nextNode = NULL;
			nextNode = cur->next;
			cur->next = prev;
			prev = cur;
			cur = nextNode;
		}
	}
	pHead = prev;
	return pHead;
}
int main()
{
	struct ListNode* n1 = malloc(sizeof(struct ListNode));
	n1->val = 1;
	struct ListNode* n2 = malloc(sizeof(struct ListNode));
	n2->val = 2;
	struct ListNode* n3 = malloc(sizeof(struct ListNode));
	n3->val = 3;
	struct ListNode* n4 = malloc(sizeof(struct ListNode));
	n4->val = 4;
	struct ListNode* n5 = malloc(sizeof(struct ListNode));
	n5->val = 5;
	struct ListNode* n6 = malloc(sizeof(struct ListNode));
	n6->val = 6; 
	struct ListNode* n7 = malloc(sizeof(struct ListNode));
	n7->val = 7;
	
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n7;
	n7->next = NULL;
	struct ListNode* head = ReverseList(n1);
	struct ListNode* nextval = head;
	while (nextval)
	{
		printf("%d->", nextval->val);
		nextval = nextval->next;
	}
	printf("NULL\n");
	return 0;
}