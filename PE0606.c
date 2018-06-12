#include <stdio.h>
#define NUM 5

int main(void)
{
    int i,lines;

    printf("请输入表格的行数：\n");
    if(scanf("%d",&lines)==1)
    {
        for(i=1;i<=lines;i++)
        {
            printf("%d,%d,%d\n",NUM,NUM*NUM,NUM*NUM*NUM);
        }
    }
}
