//This program is for counting cards on black jack

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int count = 0;
    while (card_name[0] != 'X'){
	puts("Enter the card name");
	scanf("%2s", card_name);
	int val = 0;
	switch(card_name[0]){
	case 'K':
	case 'Q':
	case 'J':
	    val = 10;
	    break;
	case 'X':
	    continue;
	default:
	    val = atoi(card_name);
	    if ((val<1) || (val >10)){
		puts("I don't understand that value");
		continue;
	    }
	}
	if ((val >=3) && (val <=6))
	    puts("count has gone up");
	else if (val == 10 || val == 11)
	    puts("count has gone down");
    }    
    return 0;
}
