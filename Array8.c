// Accept n numbers in an array and display maximum number...
#include<stdio.h>
int main()
{
 int i,n,a[100],max;
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 max=a[0];
 for(i=0;i<n;i++)
 {
  if(a[i]>max)
    max=a[i];
  }
    printf("\n maximum number=%d",max);
}
