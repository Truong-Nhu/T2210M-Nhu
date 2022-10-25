#include<stdio.h>

int tinhtong(int a)
{	
	int s=0;
	for(int i=0;i<=a;i++)
	{
		s=s+i;
	}
	return s;
}

int main()
{
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	int s = tinhtong(n);
	printf("tong cac so cua day so nguyen tu 1 den %d la: %d",n,s);
}

