#include <stdio.h>

int main()
{
    float a;
    float b;
    
    printf("nhap diem giua ky:");
    scanf("%f", &a);
    printf("nhap diem cuoi ky:");
    scanf("%f", &b);
    
    float c = (a+b)/2;
    
    if(a>=0 && b>=0 && a<=10 && b<=10 )
	{
    	if(c>=9 && c<=10){
    	printf("Xep loai A");
    	}
    	else{
    	if(c>=7 && c<9){
    	printf("Xep loai B");}
    	else{
   	 	if(c>=5 && c<7){
    	printf("xep loai C");
    	}
    	else{
    		printf("Xep loai F");
		}
    	}}
    }
    else{
    	printf("Ban co chac da nhap dung diem so cua minh chu?");
	}
}
