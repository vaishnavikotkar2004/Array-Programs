#include<stdio.h>
void accept(int a[],int n)
{
 int i;
 printf("enter array elements");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
}
void disp(int a[],int n)
{
 int i;
 printf("the array elements");
 for(i=0;i<n;i++)
 printf("%d\t",a[i]);
}
void main()
{
 int a[100],i,n;
 printf("enter limit");
 scanf("%d",&n);
 accept(a,n);
 disp(a,n);
}
