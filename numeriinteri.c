#include <stdio.h>
main()
{
int a, i, t;
float r;
t = 0;
i = 0;
printf ("Inserisci un numero: ");
scanf("%d",&a);
while (a >= 0) {
i = i + 1;
t = t + a;
r = (float)t/i;
printf ("La media attuale è: %.3f\n", r);
printf ("Inserisci un numero: ");
scanf("%d",&a);
}
printf ("La media finale è: %.3f\n", r);
}