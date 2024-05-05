/*#include <stdio.h>
#include <stdlib.h>

typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link;
} ListNode;

ListNode* insert_first(ListNode* head, element value) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = head;
	head = p;
	return head;
}

void print_list(ListNode* head) {
	for (ListNode* p = head; p != NULL; p = p->link) {
		printf("%d->", p->data);
	}
	printf("NULL \n");
}

ListNode* concat_list(ListNode* head1, ListNode* head2) {
	if (head1 == NULL) return head2;
	else if (head2 == NULL) return NULL;
	else {
		ListNode* p;
		p = head1;
		while (p->link != NULL)
			p = p->link;
		p->link = head2;
		return head1;
	}
}

int main() {
	ListNode* head1 = NULL;
	ListNode* head2 = NULL;
	ListNode* head3 = NULL;

	for (int i = 3; i >= 1; i--) {
		head1 = insert_first(head1, i * 10);
	}
	print_list(head1);
	for (int i = 6; i >= 4; i--) {
		head2 = insert_first(head2, i * 10);
	}
	print_list(head2);
	head3 = concat_list(head1, head2);
	print_list(head3);
	return 0;
}*/
	
