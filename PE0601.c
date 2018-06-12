#include <stdio.h>
#define SIZE 60 
#define FIRST 'A'

int i,j;
char alp[SIZE];
char c=FIRST;

void main(void){
for(i=0;i<SIZE;i++)
{
    alp[i]=c;
    c+=1;
    printf("alp[%d]=%c,ASCII:%d\n",i,alp[i],alp[i]);
}
}
