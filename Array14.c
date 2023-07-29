// Accept n numbers in an array and display minimum and maximum numbers..
#include<stdio.h>
int main()
{
 int a[100],min,max,i,n;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 max=a[0];
 min=a[0];
 for(i=0;i<n;i++)
 {
  if(a[i]<min)
    min=a[i];
  if(a[i]>max)
    max=a[i];
 }
 printf("\n minimum number=%d",min);
 printf("\n maximum number=%d",max);
}
