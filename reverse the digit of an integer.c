#include<stdio.h>
int main()
{
    int a,b=0,c,s=0;
	printf("enter a number:");
	scanf("%d",&a);
	for(b=a;a!=0;a=a/10){
	c=a%10;
	s=s*10+c;	
	}
	printf("The reverse of an number is:%d",s);
	return 0;
}
