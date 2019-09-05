
/* ================================================================== */
/*                                                                    */
/*   Filename.c                                                       */
/*   (c) 2012 Author                                                  */
/*                                                                    */
/*   Description                                                      */
/*                                                                    */
/* ================================================================== */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <assert.h>

int	GetCmdResult( char **result)
{

	char *strtemp;
	
	printf("\t==========> ENTERING GetCmdResult\n" );
	printf("\t==========> Pointer &result entering GetCmdResult = %p\n", &result);
	printf("\t==========> Pointer *result entering GetCmdResult = %p\n", *result);
	printf("\t==========> Pointer result entering GetCmdResult = %p\n", result);
	printf("\t==========> Result : %s\n", *result);

	
	*result = realloc(*result, 0x1a);
	
	strcpy((*result), "Hello World Its Ciaran");
	

	printf("\t==========> LEAVING GetCmdResult\n" );
	printf("\t==========> Pointer result leaving GetCmdResult  = %p\n", result);	
	printf("\t==========> Result : %s\n\n\n", *result);
	
	
	return 0x00;
	
	
}


int main()
{
	int	length = 0;
	
	char *result;
	
	result = (char*)malloc (10 * sizeof(char));
	
	strcpy(result, "Hello");
	
	length = strlen(result);
	
	
	printf("BEFORE CALL TO GetCmdResult\n");
	printf("==============================================\n");
	printf("Pointer 'result' in main  : %p\n", &result);
	printf("Pointer &result           = %p\n", &result);
	printf("Pointer *result           = %p\n", *result);
	printf("Pointer result            = %p\n", result);
	printf("Device Response in Main() : %s\n", result);
	printf("RESPONSE LENGTH           : %d\n", length);
	printf("\n\n");

	GetCmdResult(&result);
	length = strlen(result);
	
	
	printf("AFTER CALL TO GetCmdResult\n");
	printf("==============================================\n");
	printf("Pointer 'result' in main  : %p\n", &result);
	printf("Device Response in Main() : %s\n", result);
	printf("RESPONSE LENGTH           : %d\n", length);
	printf("\n\n");



}


