/*1005*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i;
    char num[101]="\0";
    int sum=0;
    scanf("%s",num);

    //calculate
    int spell[10]={0};
    for(i = 0;num[i]!='\0';i++)
    {
        sum = sum + num[i] - '0';
    }
    if(sum==0)
        printf("zero");
    for(i = 1;sum >= 1;i++)
    {
        spell[i] = sum % 10;
        sum=sum/10; 
    }
    //print
    int flag=0;
    for(i=i-1;i >= 1;i--)
    {
        if(flag==0)
            flag=1;
        else
            printf(" ");
        switch(spell[i])
        {
            case 0:
                printf("zero");
                break;
            case 1:
                printf("one");
                break;
            case 2:
                printf("two");
                break;   
            case 3:
                printf("three");
                break;
            case 4:
                printf("four");
                break;
            case 5:
                printf("five");
                break;
            case 6:
                printf("six");
                break;
            case 7:
                printf("seven");
                break;
            case 8:
                printf("eight");
                break;
            case 9:
                printf("nine");
                break;
        }
    }
} 
