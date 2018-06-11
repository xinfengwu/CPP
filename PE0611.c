/* Programming Exercise 0611 */
#include<stdio.h>

int ch[8];
int i,j,digit;
int main(void)
{
    printf("请依次输入8个整数：\n");
   for(i=0;i<8;i++)
   {
	printf("请输入下一个数字：\n");
	scanf("%d",&digit);
	ch[i]=digit;
   } 
   for(j=7;j>=0;j--)
   {
       printf("%d",ch[j]);
   }
   printf("\n");
   printf("Done\n");
   return 0;   
}
