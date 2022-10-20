#include <iostream>

int main()
{
    int n;
    printf("Nhap so nguyen : ");
    scanf("%d",&n);
    int s = 0 ;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
    }
    if (s == n)
        printf("La so hoan hao");
    else
        printf("Khong phai la so hoan hao");
}
