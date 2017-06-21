#include<stdio.h>
int main()
{
int i,m,n;
printf("enter two intervals");
scanf("%d%d",&m,&n);
for(int i=m;m<=n;i++)
{
if(m/m==0&&n/n==0)
printf("prime numbers between two intervals");
else
printf("no range");
}
return 0;
}
