#include <stdio.h>
#include <cmath>

int main(){
	int a;
	int b;
	int c;
	
	printf("nhap a:");
	scanf("%d",&a);
	printf("nhap b:");
	scanf("%d",&b);
	printf("nhap c:");
	scanf("%d",&c);
	
	if(a+b>c && a+c>b && b+c>a){
		int p = a+b+c;
		float d = (float)p / 2;
		double s = sqrt(d*(d-a)*(d-b)*(d-c));
		printf("%d , %d, %d la do dai 3 canh tam giac \n",a,b,c);
		printf("Chu vi tam giac la: %d \n",p);
//		printf("nua Chu vi tam giac la: %f \n",d);
		printf("Dien tich la: %lf \n",s);
	}
	else{
		printf("%d , %d, %d khong phai la do dai 3 canh tam giac \n",a,b,c);
	}
	
}
