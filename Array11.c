// Accept n cities and accept city to search...
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main()
{
 char s1[100][100],name[100];
 int i,n;
 void search(int n,char s1[100][100],char name);
 printf("enter limit");
 scanf("%d",&n);
 printf("enter n cities");
 for(i=0;i<n;i++)
 scanf("%s",s1[i]);
 printf("enter city to search");
 scanf("%s",name);
 search(n,s1,name);
}
void search(int n,char s1[100][100],char name)
{
 int i;
 for(i=0;i<n;i++)
 {
  if(strcmp(s1[i],name)==0)
     break;
 }
 if(i==n)
   printf("\n name is not found");
 else
   printf("\n name is found");
}
