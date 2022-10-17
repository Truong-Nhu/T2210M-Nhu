#include <stdio.h>

int main()
{
	int x;
	
	printf("Nhap tien luong (trieu dong): ");
	scanf("%d",&x);
	
	if(x>=15){
	float z= x * (float) 30/100;  
	float y = x - z;
	printf("Tien thue la: %f trieu \n",z);
	printf("Luong rong la: %f trieu",y);
	}
	else{
		if(x<=7 && x<15){
			float z= x * (float) 20/100;
			float y= x-z;
			printf("Tien thue la: %f trieu \n",z);
			printf("Luong rong la: %f trieu",y);
		}
		else{
			float z= x* (float) 10/100;
			float y= x- z;
			printf("Tien thue la: %f trieu \n ",z);
			printf("Luong rong la: %f trieu",y);
			}
			
		}
}

