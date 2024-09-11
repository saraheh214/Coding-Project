#include <stdio.h>

int main( void ){

	/* Create variables for comparison */
	unsigned int discussion_group = 3;

	/* If-Else If Build */
	switch(discussion_group){
		case 1:
			fprintf(stdout, "Group 1: develop if-else\n");
			break;
		case 2:
			fprintf(stdout, "Group 2: develop switch\n");
			break;
		case 3:
			fprintf(stdout, "Group 3: develop while\n");
			break;
		default:
			fprintf(stdout, "Ask proff for group\n");
			break;
	}

	return 0;

}
