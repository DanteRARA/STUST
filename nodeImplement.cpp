#include <iostream>
#include<stdio.h>
using namespace std;
typedef struct tnode{
	struct tnode *next;
} nNode;

void nNodePrint(nNode *node){
	nNode *ptr;
	for (ptr = node; ptr != NULL; ptr = ptr->next)
		printf("%p-->", ptr);
}

int main(){
	nNode node1, node2, node3;
	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;
	nNodePrint(&node1);

	return 0;
}

