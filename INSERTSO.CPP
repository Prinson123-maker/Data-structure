#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],i,n,j,key;
clrscr();
printf("enter the size of the array:");
scanf("%d",&n);
printf("enterred array elements are\n");
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
  key=a[i];
  j=i-1;
  while(j>=0&&a[j]>key)
  {
    a[j+1]=a[j];
    j--;
  }
    a[j+1]=key;
}
printf("after insertion\n");
for(i=0;i<n;i++)
{
 printf("%d\t",a[i]);
}
getch();
}