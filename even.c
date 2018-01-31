#include<stdio.h>
int main()
{
int a,b,i;
printf("Enter the two number");
scanf("%d%d",&a,&b);
for(i=a;i<=b;++i)
{
if(i%2==0)
printf(" %d",i);
printf("\n");
}
return 0;
}
