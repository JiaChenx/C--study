/*1001*/
#include<stdio.h>
#include<stdlib.h>
#define MAX_VALUE 1000000
#define MIN_VALUE -1000000
 
int main()
{
    int a,b,int_sum;
    char char_sum[10];
    if(scanf("%d %d",&a,&b)==1);
    if((a <= MAX_VALUE && a >= MIN_VALUE)&&(b <= MAX_VALUE && b >= MIN_VALUE))
    {
        int_sum = a + b;
        int temp = int_sum;
        int i,j;
        for(i = 0;i < 10;i++)
        {
            if(temp<0)
                temp = -temp;
            char_sum[i] = temp % 10;
            temp = temp/10;
            if(temp == 0)
                break;
        }
        if(int_sum < 0)
            printf("-");
        for(j=i;j>=0;j--)
        {
            printf("%d",char_sum[j]);
            if((j%3 == 0)&&(j != 0))
            {
                printf(",");
            }
        }
        return 0;
    }
    else
        return -1;
}
  
