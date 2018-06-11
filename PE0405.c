/* Programming Exercise 4.5 */
#include<stdio.h>

int main(void)
{
    float mps,filesize,time;

    scanf("%f,%f",&mps,&filesize);
    printf("At %.2f megabits per second,a file of %.2f megabytes\n",mps,filesize);
    time = 8*filesize/mps;
    printf("downloads in %.2f seconds.\n",time);

    return 0;   
}
