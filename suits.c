#include <stdio.h>

int main(void)
{
    char search = 'C';
    printf("Enter character: ");
    scanf("%c",&search);
    switch (search) {
    case 'M':
	puts("Music player");
	break;
    case 'G':
	puts("Gallery");
	break;
    case 'W':
	puts("Web browser");
	break;
    case 'P':
	puts("Phone dialer");
	break;
    default:
	puts("No apps start with that charcter");
	break;
    }
    return 0;

}

