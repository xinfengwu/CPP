/* Programming Exercise 4.3 */
#include<stdio.h>

int main(void)
{
    float i;
    
    scanf("%f",&i);
    printf("The input is %.1f or %.1e\n",i,i);
    printf("The input is %+.3f or %.3E\n",i,i);
    return 0;   
}
