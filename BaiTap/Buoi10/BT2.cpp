#include<stdio.h>

int main()
{
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	char s[n];
	printf("Nhap danh sach:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
	}
	int c=0;
	int max=0;
	
	for(int i=0;i<n;i++)
	{
		if(s[i]>0){
			c= c+s[i];
		}else{	
				c=0;
			}
	if(c>max){
			max =c;
			}
		
	}
	printf("tong cua cac duong lien tiep nhieu nhat la: %d",max);
}
