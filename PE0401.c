/* Programming Exercise 4.1 */
#include<stdio.h>

int main(void)
{
    char first_name[20],last_name[20];

    printf("Please enter you first name:\n");
    scanf("%s",first_name);
    printf("and enter you last name:\n");
    scanf("%s",last_name);
    printf("%s %s\n",first_name,last_name);
    return 0;   
}
