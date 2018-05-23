/* Programming Exercise 2-5 */
#include<stdio.h>
void br(void);
void ir(void);
int main(void)
{
    br();
    printf(",");
    ir();
    printf("\n");
    ir();
    printf(",\n");
    br();
    printf("\n");
    return 0;   
}

void br(void)
{
    printf("Brazil,Russia");
}

void ir(void)
{
    printf("India,China");
}
