#include <stdio.h>
#include <math.h>
//B1
int chuvi(int a, int b, int c)
{
	int p = a+b+c;
	return p;
}

//B2
int dientich(int a,int b,int c)
{	
	float d = float((a+b+c)/2);
	float s = sqrt(d*(d-a)*(d-b)*(d-c));
	return s;
}

//B3
int tongcacchuso(int a)
{
	int x=0;
	int s=0;	
	while(a!=0)
	{
		int i=a%10;
		s = s+i;
		a= a/10;
	}
	return s;
}

//B4
int UCLN(int a,int b)
{
	int ucln =1;
	int min=a;
	if(min>b){
		min=b;
	}
	for(int i=min;i>1;i--)
	{
	if(a%i==0&&b%i==0){
			ucln=i;
			break;
		}
	}
	return ucln;
}

//B5
int BCNN(int a,int b)
{
	int bcnn=a*b;
	for(int i=a;i<bcnn;i++){
		if(i%a==0&&i%b==0){
			bcnn=i;
			break;
		}
	}
	return bcnn;
}

//B6
bool scp(int a)
{
	if(a<1){
		return false;
	}
	int b= sqrt(a);
	if(b*b==a){
		return true;
	}
	return false;
}

//B7
int timso(int a)
{	
	int s=0;
	a=0;
	while(s < 10000)
	{
		a++;
		s = s + a;
	}
	return a;
}
//B8
bool ktgiamdan(int n)
{
	if(n<=11){
		return false;
	}
	else{
		while (n>11)
	{
        int i=n%10;
        n=n/10;
        if(i>n%10)
        {
            return false;
        }
	}
	return true;
	}
	
}


int main()
{	
	int a =3, b=4,c=5;
	
	int cv=chuvi(a,b,c);
	printf("chu vi la: %d\n",cv);
	
	float s=dientich(a,b,c);
	printf("dien tich la:%f \n",s);
	
	int z=430;
	int t=tongcacchuso(z);
	printf("Tong cac chu so cua so nguyen %d la: %d\n",z,t);
	
	int x=12, y=20;
	int u=UCLN(x,y);
	printf("ucln cua %d va %d la: %d \n",x,y,u);
	
	int bc=BCNN(x,y);
	printf("bcnn cua %d va %d la: %d \n",x,y,bc);
	
	if(scp(b)){
		printf("%d la so chinh phuong\n",b);
	}else{
		printf("%d khong phai so chinh phuong\n",b);
	}
	
	int n = timso(n);
	printf("So n nho nhat la %d\n",n);
	
	if(ktgiamdan(z)){
		printf("%d la so co cac chu so giam dan tu trai sang phai",z);
	}else{
		printf("%d khong phai so co cac chu so giam dan tu trai sang phai",z);
	}
}
