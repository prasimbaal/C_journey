/*This code navigates through pages of a book 
 *page numbber has to be greater than 0 
 *the book has only 250 pages */
#include <stdio.h>

int main()
{
    int page_no = 1;

    puts("Which page would you like to navigate towards: ");
    scanf("%i",&page_no);

    if (page_no < 1) {
	printf("no such page exists \n");
	return 1;
    }
    else if (page_no > 250) printf("This book only has 250 pages");
    
    else printf("Page %i contents \n", page_no);
    return 0;
}
