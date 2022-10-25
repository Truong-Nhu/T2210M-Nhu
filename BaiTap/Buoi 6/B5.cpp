#include<stdio.h>

float tinhtong(float a)
{	
	float s=0;
	for(float i=1;i<=a;i++)
	{
		s=s+(1/i);
	}
	return s;
}

int main()
{
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	
	float s = tinhtong(n);
	printf("tong cac so cua day so nguyen tu 1 den 1/%d la: %f",n,s);
}

