/*This code navigates through pages of a book 
 *page numbber has to be greater than 0 
 *the book has only 250 pages */

#include <stdio.h>
#include <string.h>


int main()
{

	char stuff[][15] = {"joy stick", "jug", "laptop", "phone", "passport", "back pack"};
	char look_for[10];

	puts("Enter the stuff you are looking for:");
	fgets(look_for, 10, stdin);

	if (strstr(stuff, look_for))
		printf("your %s have been found!! \n", look_for);

	return 0;

}

