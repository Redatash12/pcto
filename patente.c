#include <stdio.h>

int main()
{
    int n;
    int stato;
    printf("inserisci la tua età \n");
    scanf("%d", &n);

    if (n>=18)
    {
        printf("complimenti, hai diritto a conseguire la patente in italia ");
    }
    else
    {
        printf("mi dispiace ma dovrai ancora aspettare");
    }
    return (0);
}