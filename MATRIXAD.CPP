#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],b[20][20],sum[10][10],diff[10][10],i,j,m,n;
 clrscr();
 printf("enter the order of the matrice:");
 scanf("%d %d",&m,&n);
 printf("entered first array elemnts:");
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   {
    scanf("%d\t",&a[i][j]);
   }
 }
 printf("first matrice\n");
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   {
     printf("%d\t",a[i][j]);
   }
  printf("\n");
 }
 printf("entered second array elemnts\n");
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   {
     scanf("%d\t",&b[i][j]);
   }
 }
 printf("second matrix\n");
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   {
     printf("%d\t",b[i][j]);
   }
   printf("\n");
 }
 for(i=0;i<m;i++)
 {
    for(j=0;j<n;j++)
    {
      sum[i][j]=a[i][j]+b[i][j];
    }
 }
 printf("after sum\n");
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   {
     printf("%d\t",sum[i][j]);
   }
   printf("\n");
}
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
   {
     diff[i][j]=a[i][j]-b[i][j];
   }
 }
 printf("after sub\n");
 for(i=0;i<m;i++)
 {
  for(j=0;j<n;j++)
  {
    printf("%d\t",diff[i][j]);
  }
  printf("\n");
 }
 getch();
}
