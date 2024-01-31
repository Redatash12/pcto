#include <stdio.h>

int main()
{
    int n;
    printf("scivi un anno e ti dirò se è un bisestile");
    scanf("%d", &n);
    if (n % 4 == 0 && n%100 !=0 ||n % 400 == 0 )
    {
        printf("L'anno da te inserito è bisestile!");
    }
    else
    {
        printf("L'anno da te inserito non è bisestile");
    }
    return(0);
}