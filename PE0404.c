/* Programming Exercise 4.4 */
#include<stdio.h>
#define FEET 12
#define CM 30.48
int main(void)
{
    float h;
    char n[20];

    scanf("%f,%s",&h,n);
    h=h/FEET;
    printf("%s,you are %.3f feet tall\n",n,h);
    return 0;   
}
