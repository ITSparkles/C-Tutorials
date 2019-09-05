/* ========================================================================== */
/*                                                                            */
/*   main.c                                                                   */
/*   (c) 2019 Ciaran Morgan                                                   */
/*                                                                            */
/*   Implementation of a double linked list                                   */
/*                                                                            */
/* ========================================================================== */

#include <stdlib.h>
#include <stdio.h>


#include "list.h"


int main() 
{
	
	Linkedlist	myList;
	Node 		*current;
	
	printf("Initialising lists.....\n");
	
	listInitialise(&myList);
	
	listAddHead(&myList, "Start of the main list");
	
	listAddHead(&myList, "New Start of the main list");
	
	listAddHead(&myList, "New New Start of the main list");


	printf("Listing data from the head....\n");
	
	current = myList.listHead;
	while (current != NULL)
	{
		printf("Data stored is %s\n", current->data);
		current = current->nextnode;
	}

	listAddTail(&myList, "This is the tail");
	

	printf("\n\nListing data from the tail....\n");

	current = myList.listTail;
	while (current != NULL)
	{
		printf("Data stored is %s\n", current->data);
		current = current->prevnode;
	}
	

	
	return EXIT_SUCCESS;
}
