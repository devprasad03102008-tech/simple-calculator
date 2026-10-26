#include<stdio.h>
int main()
{
    char op;
    float a,b;
    printf("Enter expression ( e.g: 5 + 3):");
    scanf("%f %c 5f",&a ,&op ,& b);
    switch(op)
    {
        case '+':
        printf("= %2f\n",a+b);
        break;
        case '-':
        printf("= %2f\n",a-b);
        break;
        case '*':
        printf("= %2f\n",a*b );
        break;
        case '/':
        printf("= %2f\n",a/b);
        break;
          if (b!=0)
          printf("=%.2f\n",a/b);
          else
          printf("division by zero ");
          break;
        default:
         printf("invalid operator\n");
    }
    return 0;
}