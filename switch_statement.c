//Code that asked for an arthmetic operator and two numbers and performs the corresponding operation.
#include <stdio.h>
#include <conio.h>
int main ()
{
    char ch;
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    getchar(); // Clear the newline character from the input buffer
    printf("Enter an arithmetic operator (+, -, *, /, %): ");
    ch = getchar(); // Using getchar() to read a character
    switch(ch)
    {
        case '+':
            c = a + b;
            printf("%d + %d = %d\n", a, b, c);
            break;
        case '-':
            c = a - b;
            printf("%d - %d = %d\n", a, b, c);
            break;
        case '*':
            c = a * b;
            printf("%d * %d = %d\n", a, b, c);
            break;
        case '/':
            if (b != 0) {
                c = a / b;
                printf("%d / %d = %d\n", a, b, c);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (b != 0) {
                c = a % b;
                printf("%d %% %d = %d\n", a, b, c);
            } else {
                printf("Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }
    return 0;
}