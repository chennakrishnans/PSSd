#include<stdio.h>
void main()
{
	int a,b,i,p=1;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("factorial are:\n");
	for(i=1;i<=a;i++){
		p=p*i;
		printf("\n%d",i);
	}
	printf("\nThe product of their factorials are:%d",p);
	return 0;
}
