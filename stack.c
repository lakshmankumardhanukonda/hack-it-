#include<stdio.h>
#define max 10
void push();
void pop();
void display();
void exit();
int stack[max],top=0;
void main()
{
int choice;
while(1)
{
printf("enter your choice \n");
printf("1.push \n 2.pop \n 3.display \n 4.exit");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
       break;
case 2:pop();
       break;
case 3:display();
       break;
case 4:exit();
       break;
defult:printf("invalid choice");
}
}
}
void push()
{
if(top==max)
printf("\n overflow");
else
{
int element;
printf("\n enter element:");
scanf("%d",& element);
printf("\n element (%d) has been pushed at %d",element,top);
stack[top++]=element;
}
}
void pop()
{
if(top==-1)
printf("\n underflow");
else
{
printf("the %d element is poped",top--);
}
}
void display()
{
if(top==0)
printf("\n stack is empty!");
else
{
int i;
for(i=0;i<top;i++)
printf("%d",stack[i]);
}
}

