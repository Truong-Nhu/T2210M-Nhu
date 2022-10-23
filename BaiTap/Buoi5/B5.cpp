#include <stdio.h>
int main(){
	int n;
	do{
		printf("nhap 1 so nguyen duong:");
		scanf("%d",&n);
	}while(n<=0);
	
	int m=0;
	
	while(n!=0)
	{
		int i=n%10;
		if (i>=m){
			m=i;
		}
		n= n/10;
	}
	printf("Chu so lon nhat cua so la: %d",m);
}
