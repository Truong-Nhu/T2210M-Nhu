#include <stdio.h>

int main()
{
	int x;
	
	printf("nhap doanh so ban hang (trieu) : ");
	scanf("%d",&x);
	
	if(x <=100){
	float y = x *(float)5/100;
	printf("Tien hoa hong nhan duoc la: %f trieu",y);
	}
	else{
		if(x<=300){
			float y= x*(float)10/100;
			printf("Tien hoa hong nhan duoc la: %f trieu",y);
		}
		else{
				float y= x*(float)20/100;
			printf("Tien hoa hong nhan duoc la: %f trieu",y);
			}
			
		}
}

