/* Programming Exercise 4.2 */
#include<stdio.h>
#include<string.h>
int main(void)
{
    char name[20];
    int len;
 
    scanf("%s",name);
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    len = strlen(name)+3;
    printf("\"%*s\"\n",len,name);
    return 0;   

}
