/* Programming Exercise 0610 */
#include<stdio.h>

int i,lower,upper,sum;

int main(void)
{
    printf("Enter lower and upper integer limits:\n");
    scanf("%d %d",&lower,&upper);
    while(upper>lower)
    {
	for(i=lower;i<=upper;i++)
	{
	   printf("i=%d\n",i);
	   sum+=i*i;
	   printf("sum=%d\n",sum);
	}
	printf("The sums of the squares from %d to %d is\
	%d\n",lower*lower,upper*upper,sum);
        sum=0;
	printf("Enter the next set of limits:\n");
	scanf("%d %d",&lower,&upper);
    }
    printf("Done\n");
    return 0;   
}
