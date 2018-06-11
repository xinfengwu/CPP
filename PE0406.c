/* Programming Exercise 4.6 */
#include<stdio.h>
#include <string.h>
int main(void)
{
    char fn[20];
    char ln[20];
    int l_fn,l_ln;

    scanf("%s %s",fn,ln);
    l_fn=strlen(fn);
    l_ln=strlen(ln);
    printf("%s %s\n",fn,ln);
    printf("%*d %*d\n",l_fn,l_fn,l_ln,l_ln);
    printf("%-*d %-*d\n",l_fn,l_fn,l_ln,l_ln);
    return 0;   
}
