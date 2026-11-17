#include <stdio.h>

int main()
{
    int a, b;
    char ch;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter character (+, *, -): ");
    scanf(" %c", &ch);

    switch(ch)
    {
        case '+':
            printf("Sum = %d", a + b);
            break;

        case '*':
            printf("Product = %d", a * b);
            break;

        case '-':
            if(a > b)
            {
                printf("Big = %d", a);
                printf("\nSmall = %d", b);
            }
            else if(b > a)
            {
                printf("Big = %d", b);
                printf("\nSmall = %d", a);
            }
            else
            {
                printf("Both numbers are equal");
            }
            break;

        default:
            printf("Invalid character");
    }

    return 0;
}