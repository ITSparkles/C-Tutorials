/* ========================================================================== */
/*                                                                            */
/*   list.h                                                                   */
/*   (c) 2016 Ciaran Morgan                                                   */
/*                                                                            */
/*   Implementation of a double linked list                                   */
/*                                                                            */
/* ========================================================================== */


typedef struct _node 
{
	void 	*data;
	struct	_node *prevnode;
	struct	_node *nextnode;
} Node;

typedef struct _linkedlist 
{
	Node *listHead;
	Node *listTail;
	Node *currentNode;
} Linkedlist;



void	listInitialise	(Linkedlist *list);
void	listAddHead		(Linkedlist *list, void *data);
void	listAddTail		(Linkedlist *list, void *data);
void	listInsertNode	(Linkedlist *list, Node *node, void *data);	
void	listDeleteNode	(Linkedlist *list, Node *node);
void	listPrintNode	(Linkedlist *list, Node *node);
