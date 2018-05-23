/* Programming Exercise 3.11.5 */
#include<stdio.h>

int main(void)
{
    float i = 3.156e7;
    int age;
    printf("Please enter your age:\n");
    scanf("%d",&age);
    printf("Your age is equal to:%e seconds.\n",age*i);
    return 0;   
}
