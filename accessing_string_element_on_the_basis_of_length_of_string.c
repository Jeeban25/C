#include<stdio.h>
#include<conio.h>
int main()
{
    char str[15] = "I Love Nepal";
    int i=0, count = 0;
    while (i<13) // on the basis of string length
    {
        if (str[i]== 'A'|| str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
        {
            count++; // count the number of vowels
            // printf("%c", str[i]); // to print Ascii value of vowels
        }
        i++;
    }
    printf("Number of vowels in the string: %d\n", count); // print the number of vowels
    return 0;
}