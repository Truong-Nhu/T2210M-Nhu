#include <stdio.h>
int main()
{
	int a,b,c,d;
	
	do{
		printf("nhap a >0:");
		scanf("%d",&a);
	}while(a<=0);
	do{
		printf("nhap b >0:");
		scanf("%d",&b);
	}
	while(b<=0);
	
	if(a>b){
		c=a;
	}
	else{
		c=b;
	}
	
	for(int i=1;i<=c;i++){
		if(a%i==0 && b%i==0){
			c=i;
		}
	}
	printf("Uoc chung lon nhat cua %d va %d la: %d",a,b,c);
	d=(a*b)/c;
	printf("\n Boi chung nho nhat cua %d va %d la: %d",a,b,d);
}
