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

ListNode* search_list(ListNode* head, element x) {
	ListNode* p = head;
	for (ListNode* p = head; p != NULL; p = p->link) {
		if (p->data == x) {
			printf("리스트에서 %d를 찾았습니다.\n", x);
			return p;
		}
	}
	return NULL;
}

int main() {
	ListNode* head = NULL;
	head=insert_first(head, 10);
	print_list(head);
	head=insert_first(head, 20);
	print_list(head);
	head=insert_first(head, 30);
	print_list(head);

	search_list(head, 30);
	return 0;
}*/