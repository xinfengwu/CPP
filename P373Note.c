/* This program is to test whether pointer can be used as variable to store input data*/
#include<stdio.h>

int main(void)
{
    int *p;
    int x;
    printf("Input x:");
    scanf("%d",&x);
    p = &x;
    printf("What you inputed is: %d\n",x);
    printf("What you inputed is: %d\n",*p);
    printf("The address of x: %p\n",&x);
    printf("The address p points to: %p\n",p);

    int *prt;
    *prt = 0;
    printf("Input prt:");
    printf("What you inputed is: %d\n",*prt);
    return 0;   

