//Pass or fail program

#include <stdio.h>

int main(void)
{

    float grade = 0;

    printf("Student grade: ");
    scanf("%f", &grade);

    if (grade >= 90) printf("Congratulations!!! you have passed with an A grade \n");
    else if (grade >= 80) printf("You got a B\n");
    else if (grade >=50) printf("YOU GOT A PASSING GRADE!\n");
    else printf("You have failed, good luck\n ");
    return 0;
}
