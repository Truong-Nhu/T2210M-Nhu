#include <stdio.h>
int main(){
	int n;
	do{
		printf("nhap 1 so nguyen duong:");
		scanf("%d",&n);
	}while(n<=0);
	
	int x=0 ;
	while(n>0)
	{
		int i=n%10;
		x=i;
		n= n/10;
	}
	printf("Chu so dau tien: %d",x);
}
