// Accept n numbers in an array and display even numbers...
#include<stdio.h>
int main()
{
 int i,n,num,a[100];
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  if(a[i]%2==0)
 }
 printf("\n even numbers=%d",a[i]);
}
