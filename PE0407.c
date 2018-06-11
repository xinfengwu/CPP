/* Programming Exercise 4.7 */
#include<stdio.h>
#include<float.h>
int main(void)
{
    double d;
    float f;

    d=1.0/3.0;
    f=1.0/3.0;

    printf("%.6f\n",d);
    printf("%.12f\n",d);
    printf("%.16f\n",d);
    printf("%.6f\n",f);
    printf("%.12f\n",f);
    printf("%.16f\n",f);

    printf("%d\n",FLT_DIG);
    printf("%d\n",DBL_DIG);
    return 0;   
}
/****************************************	
运行结果：
0.333333
0.333333333333
0.3333333333333333
0.333333
0.333333343267
0.3333333432674408
6
15
 ****************************************/	
