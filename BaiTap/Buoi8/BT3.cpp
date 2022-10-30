#include <stdio.h>

int main()
{	
	int n;
	scanf("%d",&n);	 
	int ary[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ary[i]);
	}
	
	int x;
	printf("nhap so x:");
	scanf("%d",&x);
		
	int i=0;
	int y=0;
	
	for(int i=0;i<n;i++)
	{
		if(x==ary[i])
		{
			printf("%d la so co trong mang n");
			y++;
		}
		i++;
	}
	if(y==0){
		printf("%d khong co trong mang n",x);
	}
	
}
		

