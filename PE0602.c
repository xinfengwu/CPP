#include <stdio.h>
#define MAX 5
#define STH '$'

void main(void)
{
    int i,j;
    
    for(i=1;i<=MAX;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",STH);
        }
        printf("\n");
    }

}
