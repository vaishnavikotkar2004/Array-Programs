// Accept n numbers in an array and display minimum number..
#include<stdio.h>
int main()
{
 int a[100],i,n,min;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 min=a[0];
 for(i=0;i<n;i++)
 {
  if(a[i]<min)
    min=a[i];
 }
 printf("\n minimum number=%d",min);
}
