#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the a number:");
	scanf("%d",&a);
	printf("Enter the b number:");
	scanf("%d",&b);
	printf("A before swapping A=%d\n",a);
	printf("B before swapping B=%d\n",b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("A after swapping A=%d\n",a);
	printf("B after swapping B=%d\n",b);
	return 0;
}
