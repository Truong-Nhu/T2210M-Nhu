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
	
	int y=0;	
	for(int i=n-1;i<n;i--)
	{
		if(ary[i]%2!=0)
		{
			printf("so le cuoi cung cua day la %d",ary[i]);
			break;	
		}
		y++;	
	}
	if(y==0)
	{
		printf("day khong co so le nao ca");
	}
}
	
