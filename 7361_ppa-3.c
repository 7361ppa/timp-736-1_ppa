
#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int value;
	struct node *next;
	struct node *prev;
} node;

node *head = NULL;
node *tail = NULL;

int isEmpty()
{
	if ((head == NULL) && (tail == NULL))
		return 1;
	else
		return 0;
}

node *find_node_num(int k)
{
