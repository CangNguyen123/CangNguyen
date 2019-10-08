#include<stdio.h>

int main() 
{
	// Khai bao bien
	int a = 0;
	int b = 0;
	int x = 0;
	
	// DOc vao gia tri a, b
	scanf("%d",&a);
	scanf("%d",&b);	
	
	//Xu ly
	x=a;
	a=b;
	b=x;
	
	
	// In gia tri 
	printf ("gia tri cua a la %d\n",a);
	printf ("gia tri cua b la %d\n",b);
	// printf("Gia tri cua a, b la: %d,%d", a, b);
	
	return 0;
}
