#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<math.h>

typedef struct PolyNode *Polynomial;
struct PolyNode {
    int expon;    
    float coef;
    Polynomial link;
};

char Compare(int a, int b)
{
    if(a > b)
        return 1;
    if(a < b)
        return -1;
    if(a == b)
        return 0;
}
 

void Attach( float c, int e, Polynomial *pRear )
{ 
    Polynomial P;
    P = (Polynomial)malloc(sizeof(struct PolyNode));
    P->coef = c;
    P->expon = e;
    P->link = NULL;
    (*pRear)->link = P;
    *pRear = P;
}

Polynomial ReadPoly()
{
    Polynomial P, Rear, t;
    int e, N;
    float c;
    scanf("%d", &N);
    P = (Polynomial)malloc(sizeof(struct PolyNode));
    P->link = NULL;
    Rear = P;
    while ( N-- ) 
    {
        scanf("%d %f", &e, &c);
        Attach(c, e, &Rear);
    }
    t = P; P = P->link; free(t);
    return P;
}

Polynomial Add (Polynomial P1, Polynomial P2)
{
    Polynomial front, rear, temp;
    float sum;
    rear = (Polynomial) malloc(sizeof(struct PolyNode));
    front = rear;
    while ( P1 && P2 )
        switch ( Compare(P1->expon, P2->expon) ) {
        case 1:
            Attach( P1->coef, P1->expon, &rear);
            P1 = P1->link;
            break;
        case -1:
            Attach(P2->coef, P2->expon, &rear);
            P2 = P2->link;
            break;
        case 0:
            sum = P1->coef + P2->coef;
            if ( sum ) Attach(sum, P1->expon, &rear);
            P1 = P1->link;
            P2 = P2->link;
            break;
    }
    for ( ; P1; P1 = P1->link ) Attach(P1->coef, P1->expon, &rear);
    for ( ; P2; P2 = P2->link ) Attach(P2->coef, P2->expon, &rear);
    rear->link = NULL;
    temp = front;
    front = front->link;
    free(temp);
    return front;
}

int Count(Polynomial P)
{
    
    int i = 0;
    while ( P ) 
    {   
        P = P->link;
        i++;
    }
    return i;
}

void PrintPoly( Polynomial P )
{ 
    printf("%d",Count(P));  
    while ( P )     
    { 
        printf(" %d %0.1f", P->expon, P->coef);   
        P = P->link;  
    }
    printf("\n");
}

int main()
{
    Polynomial P1, P2, PP, PS;
    P1 = ReadPoly();
    P2 = ReadPoly();
    PS = Add( P1, P2 );
    PrintPoly(PS);
    return 0;
}

