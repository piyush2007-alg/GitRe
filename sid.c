#include <stdio.h>

int main()
{
    int marks[5];
    int i;
    int total = 0;
    float average, percentage;
    char grade;

    printf("Enter marks of 5 subjects:\n");

    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total = total + marks[i];
    }

    average = total / 5.0;
    percentage = average;

    if(percentage >= 90)
    {
        grade = 'A';
    }
    else if(percentage >= 75)
    {
        grade = 'B';
    }
    else if(percentage >= 60)
    {
        grade = 'C';
    }
    else if(percentage >= 40)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    printf("\n------ RESULT ------\n");

    for(i = 0; i < 5; i++)
    {
        printf("Subject %d Marks = %d\n", i + 1, marks[i]);
    }

    printf("\nTotal Marks = %d\n", total);
    printf("Average = %.2f\n", average);
    printf("Percentage = %.2f%%\n", percentage);
    printf("Grade = %c\n", grade);

    if(grade == 'F')
    {
        printf("Result: Fail\n");
    }
    else
    {
        printf("Result: Pass\n");
    }

    printf("\nThank You!\n");

    return 0;
}