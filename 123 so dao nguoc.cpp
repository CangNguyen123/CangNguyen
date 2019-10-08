#include<stdio.h>
int main (){
float a = 0;
float b = 0;
float maxValue = 0;

printf ("\nNhap 2 so a,b;:");
scanf ("%f", &a);
scanf ("%f", &b);

maxValue = a;
if (b >= maxValue){
	maxValue = b;
}
printf ("\nSo lon hon la: %f", maxValue);
}
