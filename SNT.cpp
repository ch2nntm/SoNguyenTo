#include <stdio.h>
#include <conio.h>

void Nhap(int a[], int &n)
{
	printf("\nNhap n: ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("\na[%d]= ",i+1);
		scanf("%d",&a[i]);
		}
}

int SNT(int n)
{
	for(int i=2; i<n; i++)
	{
		if(n%i==0)
		return 0;
		}
	return 1;
}

void SoNT(int a[], int n)
{
	printf("\nSo nguyen to: ");
	for(int i=0; i<n; i++)
	{
		if(SNT(a[i])==1)
		printf("%d ",a[i]);
		}
}	

main()
{
	int a[100], n;
	Nhap(a,n);
	SoNT(a,n);
}	
		
	
