/*1001*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,int_sum;
    char char_sum[10];
    scanf("%d %d",&a,&b);
    if((a<=1000000||a>=-1000000)&&(b<=1000000||b>=-1000000))
    {
        int_sum = a + b;
        int temp = int_sum;
        int i,j;
        for(i = 0;i < 10;i++)
        {
            if(temp<0)
                temp = -temp;
            char_sum[i]=temp % 10;
            temp = temp/10;
            if(temp == 0)
                break;
        }
        if(int_sum < 0)
            printf("-");
        for(j=i;j>=0;j--)
        {
            printf("%d",char_sum[j]);
            if(j == 3)
            {
                printf(",");
            }
        }
        return 0;
    }
    else
        printf("number out of limit !");
}
  
