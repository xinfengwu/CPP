#include <stdio.h>

void creatalp(char);
void prt(char,char);

int main(void)
{
    char ch,ch_alp[26];
    
    printf("请输入一个英文字母：\n");
    do
        scanf("%c",&ch);
    while(ch<'A'||(ch>'Z'&&ch<'a')||ch>'z');
    printf("你输入的是：%c\n",ch);
    if('A'<=ch<='Z')
    {
        creatalp('A');
        prt(ch,'A');
    }
    if('a'<=ch<='z')
    {
        creatalp('a');
        prt(ch,'a');
    }

    void creatalp(char firstchar)
    {
        int m;
        for(m=0;m<26;m++)
        {
            ch_alp[m]=firstchar;
	    firstchar++;
    }
    }
    void prt(char userinputchar,char firstchar)
    {
        int i,j,k,l;

        for(i=0;i<=userinputchar-firstchar;i++)
        {
           for(j=i;j<userinputchar-firstchar;j++)
           {
               printf(" ");
           }
           for(k=0;k<i;k++)
           {
               printf("%c",ch_alp[k]);
           }
           for(l=i;l>=0;l--)
           {
               printf("%c",ch_alp[l]);
           }
           printf("\n");
        }
    }    

    return 0;
}
