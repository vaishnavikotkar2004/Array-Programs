// Accept n numbers in an array and accept a number to search....(without function)
#include<stdio.h>
int main()
{
 int a[100],i,n,num;
 printf("enter limt");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter number to search");
 scanf("%d",&num);
 for(i=0;i<n;i++)
 {
  if(a[i]==num)
   break;
 }
 if(i==n)
    printf("\n number is not found");
 else
    printf("\n number is found");
}
