#include <stdio.h>

int main()
{
    int n;
    printf("inserisci la tua età \n");
    scanf("%d", &n);

    if (n >= 18)
    {
        printf("sei maggiorenne bravo");
    }

    else
    {
        printf("no sei minorenne");
    }
    return (0);
}