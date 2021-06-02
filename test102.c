typedef struct ListNode {
	int val;
	struct ListNode *next;
}Node;
struct ListNode* ReverseList(struct ListNode* pHead)
{
	Node* prev = NULL, *cur = pHead, *newhead = NULL, *n1 = NULL;
	if (pHead == NULL || pHead->next == NULL)
	{
		return pHead;
	}
	else
	{
		while (cur)
		{
			prev = cur->next;
			if (n1 == NULL)
			{
				n1 = (Node*)malloc(sizeof(Node));
				n1->val = cur->val;
				n1->next = NULL;
				newhead = n1;
			}
			else
			{
				n1 = (Node*)malloc(sizeof(Node));
				n1->val = cur->val;
				n1->next = newhead;
				newhead = n1;
			}
			free(cur);
			cur = prev;
		}
	}
	return newhead;
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
	while (head)
	{
		printf("%d->", head->val);
		head = head->next;
	}
	printf("NULL\n");
	return 0;
}