// Accept n numbers in an array and count even numbers...
#include<stdio.h>
int main()
{
 int i,n,a[100],c=0;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 for(i=0;i<n;i++)
 {
  if(a[i]%2==0)
     c++;
 }
 printf("\n count even number=%d",c);
}
