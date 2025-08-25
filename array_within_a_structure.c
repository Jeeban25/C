#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Student 
{
    char name[20];
    int roll;
    float marks[5];
}s;

int main()
{
    int i, sum=0;
    float per;
    printf("Enter name of student: ");
    gets(s.name);

    printf("Enter roll no. of student: ");
    scanf("%d",&s.roll); 

    printf("\nEnter marks for 5 subjects: ");
    for (i=0; i<5; i++)
    {
        scanf("%f", &s.marks[i]);
        sum += s.marks[i];
    }

    per = (sum/500.0)*100;

    printf("\nName = %s\t Roll no. = %d\t and percentage = %f", s.name, s.roll, per);

    return 0;
}
