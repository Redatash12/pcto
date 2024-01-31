#include<stdio.h>
void main ()
{
 int m, n;
 printf("Inserire il primo numero:\n");
 scanf ("%d", &m);
 printf("Inserire il secondo numero:\n");
 scanf ("%d", &n);
 if (m % n == 0)
 {
 printf ("%d e' multiplo di %d\n", m, n);
 } else {
 printf ("%d non e' multiplo di %d\n", m, n);
 }
}
