/* ========================================================================== */
/*                                                                            */
/*   lists.c                                                                  */
/*   (c) 2019 Ciaran Morgan                                                   */
/*                                                                            */
/*   Implementation of a double linked list                                   */
/*                                                                            */
/* ========================================================================== */

#include <stdlib.h>


#include "list.h"

void	listInitialise	(Linkedlist *list)
{
	// initialise the list by pointing to NULL
	list->listHead = NULL;
	list->listTail = NULL;
	list->currentNode = NULL;

}


void	listAddHead		(Linkedlist *list, void* data)
{
	// Create new node
	Node	*node	= (Node*) malloc(sizeof(Node));
	node->data = data;
	
	if (list->listHead == NULL) // List is empty
	{
		list->listTail = node;
		node->nextnode = NULL;
		node->prevnode = NULL;
	}
	else  // list already exists
	{
		node->nextnode = list->listHead;
		list->listHead->prevnode = node;
	}
	
	// update the list structure with a new head
	list->listHead = node;
}





void	listAddTail		(Linkedlist *list, void* data)
{
	Node	*node	= (Node*) malloc(sizeof(Node));
	node->data = data;
	node->nextnode	=	NULL;

	if (list->listHead == NULL) // List is empty
	{
		list->listHead = node;
		node->nextnode = NULL;
		node->prevnode = NULL;
	}
	else
	{
		list->listTail->nextnode = node;
		node->prevnode = list->listTail;
	}
	
	// Update the list structure witha new tail
		list->listTail = node;

	
}




void	listInsertNode	(Linkedlist *list, Node *node, void* data)
{
}

	
void	listDeleteNode	(Linkedlist *list, Node *node)
{
}


void	listPrintNode	(Linkedlist *list, Node *node)
{
	
}
