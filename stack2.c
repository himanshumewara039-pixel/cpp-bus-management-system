#include<stdio.h>
#define MAX 10
int stack [MAX];
int top = -1;
void Insert(int val)
{
    if (top == MAX-1)
    printf("Overflow");
    else
    {
        top=top+1;
        stack[top]=val;     
    }
}
void Delete()
{
    if (top == -1)
    printf("Underflow");
    else
    
     top--;
    }
    void display ()
    {
        if (top == -1)
        printf("stack is empty");
        else{
            for(int i = top; i >= 0; i--)
{
    printf("%d\n", stack[i]);
}
        }
    }
int main()
{
    int ch, val;

    while(1)
    {
        printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &val);
                Insert(val);
                break;

            case 2:
                Delete();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}