#include<stdio.h>

int sum(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

int main()
{
int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
printf("sum = %d",sum(a,b));
printf("difference = %d",sub(a,b));
printf("product = %d",mul(a,b));
printf("divided value = %d",div(a,b));
}

int sum(int p,int q)
{
return p+q;
}

int sub(int p,int q)
{
return p-q;
}

int mul(int p,int q)
{
return p*q;
}

int div(int p,int q)
{
return p/q;
}
