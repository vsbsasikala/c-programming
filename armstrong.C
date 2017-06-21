#include<stdio.h>
int main()
{
int remainder,n,originum,res=0;
printf("enter two digit number");
scanf("%d",&n);
originum=n;
while(originum!=0)
{
remainder=originum%10;
res+=remainder*remainder;
originum/=10;
}
if(result==number)
printf("armstrong number");
else
printf("not an armstrong number");
return 0;
}

