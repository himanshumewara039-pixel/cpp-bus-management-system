#include<stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push()
{
    int x ;
{

    if (top == MAX-1)
    printf("enter element \n");
    scanf("%d",&x);
        top++;
        stack[top] = x;
}
    }
void pop()
{
    if (top == -1)
    printf("stack is empty\n");
    else
    {
        printf("deleted element is %d\n",stack[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
    printf("stack is empty\n");
    else
    {
        printf("elements in stack are \n");
        for(int i=top;i>=0;i--)
        printf("%d\n",stack[i]);
    }
}int main()
{ int ch ; 
    while (1)
    {
        
        printf("1.push\n2.pop\n3.display\n4.exit\n");
        printf("enter your choice \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: return 0;
            default : printf("invalid choice \n");
        }
    }
}

    