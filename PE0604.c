#include <stdio.h>
#define MAX 6
void main(void)
{
    char ch;
    int i,j;
    
    ch='A';

    for(i=0;i<MAX;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
	}
        printf("\n");
    }

}
