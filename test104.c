typedef struct ListNode {
	int val;
	struct ListNode *next;
}Node;
struct ListNode* FinKthToTail(struct ListNode* pListHead, int k)
{
	Node* slow = pListHead, *fast = pListHead;
	while (k-- && fast)
	{
		fast = fast->next;
	}
	while (fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	if (k > 0 && fast)
		return NULL;
	else if (k >= 0)
		return NULL;
	return slow;
}
int main()
{
	int k = 8;
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
	struct ListNode* head = FinKthToTail(n1, k);
	while (head)
	{
		printf("%d->", head->val);
		head = head->next;
	}
	printf("NULL\n");
	return 0;
}