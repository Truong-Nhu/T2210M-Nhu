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
	
	int s=0;
	int x=0;
	
	for(int i=0;i<n;i++)
	{ 	
		if(ary[i]%2!=0)
		{
			s = s+ary[i];
			x++;
		}
	}

	double tbc = double (s/x);
	printf("trung binh cong cac so le la: %lf",tbc);
	
}

