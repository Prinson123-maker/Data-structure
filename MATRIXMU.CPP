#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10][10],b[10][10],c[10][10],r1,r2,c1,c2,k,i,j;
 clrscr();
 printf("enter order of the first matrice\n");
 scanf("%d %d",&r1,&c1);
 printf("enter order of the second matrice\n");
 scanf("%d %d",&r2,&c2);
 if(c1!=r2)
  {
   printf("matrix multipication not possible");
  }
 else
  {
    printf("enter the elements of first matrix\n");
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("enter the elements of second matrix\n");
    for(i=0;i<r2;i++)
    {
     for(j=0;j<c2;j++)
     {
       scanf("%d",&b[i][j]);
     }
    }
    for(i=0;i<r1;i++)
    {
     for(j=0;j<c2;j++)
     {
      c[i][j]=0;
      for(k=0;k<c1;k++)
     {
       c[i][j]+=a[i][k]*b[k][j];
     }
     }
    }
    printf("matrix multipilcation\n");
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c2;j++)
      {
     printf("%d\t",c[i][j]);
      }
     printf("\n");
  }
  }
getch();
}


