#include <stdio.h>
#include <conio.h>

int KTr(int n)
{
	if(n==2 || n==3) return 1;
	for(int i=2; i<=n/2; i++)
	if(n%i==0) return 0;
	return 1;
}	

main()
{
	int n;
	printf("\nNhap n:");
	scanf("%d",&n);
	if(KTr(n)==0)
	printf("\nKhong phai SNT");
	else
	printf("\nLa SNT");
}	
