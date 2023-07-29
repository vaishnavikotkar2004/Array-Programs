// Accept n numbers in an array and accept number to search..(with function)
#include<stdio.h>
int main()
{
 int a[100],i,n,num;
 void search(int a[100],int num,int n);
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n numbers");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("enter number to search");
 scanf("%d",&num);
 search(a,num,n);
}
void search(int a[100],int num,int n)
{
 int i;
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
