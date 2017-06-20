#include<stdio.h>
int main()
{
int long n;
int count;
printf("enter the number of digits");
scanf("%ld",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("count the number of digits");
return 0;
}
