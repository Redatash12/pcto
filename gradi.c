#include<stdio.h>
int main()

{
float C;
printf("inserisci una gradazione celsius \n");
scanf("%f", &C);
float F = C*1.8 + 32;
float K = C + 273.15;

if  (C < -273.15)

{
printf("error \n");
}
else
{
printf("la temperatura attuale in fahrenheint è %f\n la temperatura attuale in kelvin è %f", F, K);
}

return(0);
}