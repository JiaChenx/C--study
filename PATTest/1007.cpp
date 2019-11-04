/*1007*/
#include<stdio.h>
#include<stdlib.h> 
int main()
{
    int N;
    int thisSum,maxSum;
    int left,right;
    left = right = 0;
    thisSum = 0;
    maxSum = -1;
    int i;
    scanf("%d",&N);
    int A[N];
    for(i = 0;i < N;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i = 0;i < N;i++)
    {
        thisSum += A[i];
        if(thisSum > maxSum)
        {
            maxSum = thisSum;
            right = A[i];
            if(thisSum-A[i] == 0)
                left = A[i];
        }
        else if(thisSum < 0)
        {
            thisSum = 0;
        }
    }
    
    if(maxSum < 0)
    {
        maxSum = 0;
        left = A[0];
        right = A[N-1];
    }
     
    printf("%d %d %d",maxSum,left,right); 
    
    return 0;
}
