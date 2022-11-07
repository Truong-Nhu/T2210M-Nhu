#include<stdio.h>

int main()
{
	int a[10];
	printf("Nhap 10 so nguyen:\n");
	int b=1;
	for(int i=0;i<10;i++){
		printf("a[%d]: ",b);
		b++;
		scanf("%d",&a[i]);
	}
	 printf("day so sau khi dao nguoc la: \n");

	for(int i=9;i>=0;i--)
	{
			printf("%d \n",a[i]);
	}
}

