#include<stdio.h>
#include<string.h>
int main()
{
char a[10],b[10];
int i,n;
printf("\nEnter the string:");
scanf("%d",a);
n=strlen(a);
for(i=0;i<n;i=i+2)
{
b[i]=a[i];
printf("%s",b[i]);
}
printf(" ");
