#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"

static Node_t* createNode(int head) {
	Node_t* node = (Node_t*) malloc(sizeof(node));
	node->head = head;
	node->tail = NULL;
	return node;
}

void push(Node_t * root, int value) {
	Node_t * currentNode = root;
	if (currentNode != NULL) {
		while (currentNode->tail != NULL)
			currentNode = currentNode->tail;
		currentNode->tail = createNode(value);
	}
}

void printList(Node_t * root) {
	Node_t * currentNode = root;
	while (currentNode != NULL) {
		printf("%d\n", currentNode->head);
		currentNode = currentNode->tail;
	}
}

Node_t* createList(unsigned int nodeCount, ...){
	va_list values;
	va_start(values,nodeCount);
	int val = va_arg(values, int);

	for(int i=0;i<nodeCount;i++){
		val = va_arg(values, int);
		Node_t(i);
		push(&i ,val);
	}
	return &;
}
