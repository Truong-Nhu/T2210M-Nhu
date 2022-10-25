#include<stdio.h>

int fibomaci(int a)
{
	int x0 = 0;
	int x1 = 1;
	int x2 = 1;
	for(int i=3;i<=a;i++)
	{
		x0 = x1;
		x1 = x2;
		x2 = x0 + x1;
	}
	return x2;
}
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	n = fibomaci(n);
	printf("So o vi tri do trong day so Fibonaci la: %d",n);
}
