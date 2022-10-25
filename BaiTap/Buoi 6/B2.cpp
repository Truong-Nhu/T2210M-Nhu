#include<stdio.h>

int max(int a,int b,int c)
{	
	if(a>b&&a>c)
	{
		return a;
	}
	if(b>a&&b>c)
	{
		return b;
	}
	if(c>a&&c>b)
	{
		return c;
	}
	
	
	return b;
}
int main()
{
	int x, y,z;
	printf ("Nhap 3 so x, y,z:\n");
	scanf("%d %d %d",&x, &y,&z);
	
	int m= max(x,y,z);
	printf("so lon nhat la: %d",m);
}
