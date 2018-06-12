#include <stdio.h>

void main(void)
{
    char ch,ch2;
    
    for(ch='F';ch>='A';ch--)
    {
        for(ch2='F';ch2>=ch;ch2--)
        {
            printf("%c",ch2);
        }
        printf("\n");
    }

}
