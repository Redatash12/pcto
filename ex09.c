#include<stdio.h>
int main() 
{
    int n;
    int n1;
    int n2;

    printf("inserisci 3 misure per formare i lati di un triangolo \n");
    scanf("%d \n %d \n %d",&n,&n1,&n2);

    if (n == n1 && n1 == n2 && n == n2)
    {
    printf("il triangolo è equilatero");
    }
    
    else if (n!=n1 && n!=n2 && n1!=n2)
    {
    printf("il triangolo è scaleno");
    }
    else
    {
    printf("il tuo triangolo è isolscele");
    }
    return(0);



}