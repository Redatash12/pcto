#include<stdio.h>
main ()
{
int restoDiv4, restoDiv100, restoDiv400;
int anno;
printf ("Inserire un anno: ");
scanf ("%d", &anno);
restoDiv4 = anno % 4;
restoDiv100 = anno % 100;
restoDiv400 = anno % 400;
if ((restoDiv4==0) && (restoDiv100!=0) ||
(restoDiv400==0))
{
 printf("%d e' bisestile\n",anno);
} else {
 printf ("%d non e' bisestile\n",anno);
}
}