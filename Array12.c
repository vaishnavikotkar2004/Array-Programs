// Accept n numbers in an array and accept number to search..and number is found then return position otherwise -1..
#include<stdio.h>
int main()
{
 int a[100],i,n,num,p;
 int search(int a[100],int n,int num);
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter number to search");
 scanf("%d",&num);
 search(a,n,num);
 p=search(a,n,num);
}
int search(int a[100],int n,int num)
{
 int i;
 for(i=0;i<n;i++)
 {
  if(a[i]==num)
  {
   return i;
  }
 }
 return -1;
}
