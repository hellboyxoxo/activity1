#include<stdio.h>

int sum(int *,int *);
int sub(int *,int *);
int mul(int *,int *);
int div(int *,int *);

int main()
{
int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
int *p,*q;
p=&a;
q=&b;
printf("sum = %d",sum(p,q));
printf("difference = %d",sub(p,q));
printf("product = %d",mul(p,q));
}

int sum(int *p,int *q)
{
return *p+*q;
}

int sub(int *p,int *q)
{
return *p-*q;
}

int mul(int *p,int *q)
{
return *p**q;
}
