#include <stdio.h>

int main()
{
	int a;
	int b;
	
	printf("nhap so a:");
	scanf("%d",&a);
	printf("nhap so b:");
	scanf("%d",&b);
	int c = a % b;

	
	if(c == 0){
		printf("b la mot uoc so cua a");
	}
	else{
		printf("b khong phai uoc so cua a");
	}

}

