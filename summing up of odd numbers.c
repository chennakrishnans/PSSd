#include <stdio.h>

int main()
{
    int a,i,b=0;
    printf("Enter the number up to where we have to generate odd numbers:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2!=0){
            printf("%d\n",i);
            b=b+i;
        }
    }
    printf("sum of odd is:%d",b);
}
