/* Programming Exercise 3.11.6 */
#include<stdio.h>

int main(void)
{
    float i = 3e-23;
    int j = 950;
    float k;
    printf("Please enter :\n");
    scanf("%f",&k);
    printf("The number of water is %f.\n",k*j/i);
    return 0;   
}
