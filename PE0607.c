#include <stdio.h>
#include <string.h>
int main(void)
{
    char ch[]="hello";
    int i;
    
    i=strlen(ch);
    for(;i>=0;i--)
    {
       printf("%c",ch[i]);
    }
      
    printf("\n");
}
