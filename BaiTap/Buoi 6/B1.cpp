#include <stdio.h>

int songuyenduong(int a)
{
	do{
		printf("nhap 1 so nguyen duong:");	
		scanf("%d",&a);
	}while(a<=0);
	return a;
}

int sodaonguoc(int a)
{
	int x=0;
	while(a!=0){
		int sd=a%10;
		x= x*10 + sd;
		a= a/10;
	}
 		return x;
 }



int main(){

	int n = songuyenduong(n);
	int y = sodaonguoc(n);
	printf("dao nguoc la %d",y);
}
