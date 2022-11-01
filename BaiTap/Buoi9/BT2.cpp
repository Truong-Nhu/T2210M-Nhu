#include<stdio.h>
#include <string.h>

int main()
{
	char s[50];
	printf("Nhap chuoi:");
	scanf("%s",s);

	int dem=0;
	for (int i=0; s[i]!='\0'; i++)
	{
        if (s[i]=='a'||s[i]=='e'||s[i]=='u'||s[i]=='o'||s[i]=='i')
        {	
        	dem++;
        }
	}
	int k= strlen(s) - dem;
	
	printf("trong chuoi co %d nguyen am va %d ky tu khac",dem,k);
	
		
}
