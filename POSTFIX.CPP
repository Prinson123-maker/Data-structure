#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int stack[20];

int top=-1;
void push(int x)
{
 stack[++top]=x;
}
int pop()
{
 return stack[top--];
}
void main()
{
 clrscr();
 char exp[20];
 char *e;
 int n1,n2,n3,num;
 printf("enter the expression:");
 scanf("%s",&exp);
 e=exp;
 while(*e!='\0')
 {
  if(isdigit(*e))
  {
   num=*e-48;
   push(num);
  }
  else
  {
   n1=pop();
   n2=pop();
   switch(*e)
   {
    case'+':
       {
	n3=n1+n2;
	break;
       }
    case'-':
       {
	n3=n1-n2;
	break;
       }
    case'*':
       {
	n3=n1*n2;
	break;
       }
    case'/':
       {
	n3=n1/n2;
	break;
       }
    }

   push(n3);
  }
  e++;
 }
 printf("result of the expression %s=%d\n\n",exp,pop());
 getch();
}