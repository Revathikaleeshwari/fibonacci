#include<stdio.h>
main()
{
long a,b,c,count,n,i;
count=0;
printf("Enter the initial values\n");
scanf("%d1d %d1d",&a,&b);
printf("Enter the limit\n");
scanf("%d1d",&n);
printf("Fibonacci series are\n");
if(n>=2)
{
printf("%1d\t %1d",a,b);
for(i=0;i<n-2;i++)
{
c=a+b;
a=b;
b=c;
printf("\t%d",c);
count++;
}
}
else
printf("%d",a);
return 0;
}
