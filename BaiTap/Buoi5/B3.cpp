#include <stdio.h>
int main(){
	int n;
	do{
		printf("nhap 1 so nguyen duong:");
		scanf("%d",&n);
	}while(n<=0);
	
	int x=0;
	int s=0;
	
	while(n!=0)
	{
		int i=n%10;
		s = s+i;
//		printf("%d \n",i);
		n= n/10;
//		printf("%d \n",n);
	}
	printf("Tong cac chu so la: %d",s);
}
