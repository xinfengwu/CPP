#include <stdio.h>

int main(void)
{
    float i,j;

    while(scanf("%f",&i)==1&&scanf("%f",&j)==1) 
    {
        printf("你输入的两个数是：%f和%f",i,j);
        printf("它们之差处除以它们的乘积等于：%f\n",(i-j)/(i*j));
        printf("请输入下一对数：（按q退出)\n");

    }

}
