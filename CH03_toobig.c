/* 超出系统允许的最大值 */
#include<stdio.h>
int main(void)
{
   /* 整型 */ 
    int sumi=0;
    int i=0;
    int t=1;
    for(i=0;i<sizeof(int)*8-1;i++){
      sumi += t;
      t *=2;
      printf("i=%d,sumi=%d,t=%d\n",i,sumi,t);
    }
    printf("Max of int is %d\n",sumi);
   /* 无符号整型 */ 
    int sumui=0;
    int j=0;
    int an_ui=1;
    for(j=0;j<sizeof(unsigned int)*8;j++){
      sumui += an_ui;
      an_ui *=2;
      printf("j=%u,sumui=%u,an_ui=%u\n",j,sumui,an_ui);
    }
    printf("Max of unsigned int is %u\n",sumui);


    return 0;   
}
