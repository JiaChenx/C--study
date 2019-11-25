/*1008-20*/
#include<stdio.h>
#include<stdlib.h> 

#define UP 6
#define DOWN 4
#define STAY 5
int main()
{
    int i,N;
    int data[101];
    scanf("%d",&N);
    for(i = 0;i < N;i++)
    {
        scanf("%d",&data[i]);
    }
    
    int time = 0;
    time = time + (data[0] - 0) * UP;//first up
    /*up and down time*/
    for(i=0;i<N-1;i++)
    {
        if(data[i]<data[i+1])
        {
            time += (data[i+1] - data[i]) * UP;
        }
        if(data[i]>data[i+1])
        {
            time += (data[i] - data[i+1]) * DOWN;
        }
    }
    time += N * STAY;//stay time
    printf("%d",time);
}
