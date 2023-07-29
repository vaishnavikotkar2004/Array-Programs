// Accept n numbers in an array and display sum of array...
#include<stdio.h>
int main()
{
 int i,n,a[100],s=0;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  s=s+a[i];
 }
 printf("\n sum of array=%d",s);
}
