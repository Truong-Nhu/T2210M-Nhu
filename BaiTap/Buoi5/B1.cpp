#include <stdio.h>

int main()
{
	int n;
	do{
		printf("nhap so n = ");
		scanf("%d",&n);
	}while(n<=0);
	
	int s=0;
	printf(" Cac uoc chua %d lan luot la: \n",n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0){
			printf("%d \n",i);
			s=s+i;
		}
		
	}
	printf("\n Tong cac uoc cua %d la = %d",n,s);
}
