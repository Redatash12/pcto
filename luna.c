#include <stdio.h>
int main()

{
    int n;
    printf("inserisci il tuo anno di  nascita \n");
    scanf("%d", &n);
    int x = n - 1969;
    int y = x * -1;

    if (n==1969)
    {
    printf("sei nato lo stesso anno al primo atterraggiuo sulla luna");
    }
    else if ("n>1969")
    {
    printf("sei nato %d anni dopo il primo sbarco sulla luna", x);
    }

    else
    {
    printf(" sei nato %d anni prima del primo sbagrco sulla luna", y);
    }
    
    return(0);
}