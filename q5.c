#include <stdio.h>

float calculate_total(float m1, float m2, float m3, float m4, float m5)
{
    return m1 + m2 + m3 + m4 + m5;
}

float calculate_percentage(float total)
{
    return total / 5.0;
}

int check_pass(float m1, float m2, float m3, float m4, float m5)
{
    if (m1 < 40 || m2 < 40 || m3 < 40 || m4 < 40 || m5 < 40)
    {
        return 0;
    }
    return 1;
}

char calculate_grade(float percentage, int passed)
{
    if (!passed)
    {
        return 'F';
    }
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 80)
        return 'B';
    else if (percentage >= 70)
        return 'C';
    else if (percentage >= 60)
        return 'D';
    else if (percentage >= 40)
        return 'E';
    else
        return 'F';
}

int main()
{
    float m1, m2, m3, m4, m5;
    printf("enter marks of 5 subjects (out of 100): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);

    float total = calculate_total(m1, m2, m3, m4, m5);
    float percentage = calculate_percentage(total);
    int passed = check_pass(m1, m2, m3, m4, m5);
    char grade = calculate_grade(percentage, passed);

    printf("total marks: %.2f\n", total);
    printf("percentage: %.2f%%\n", percentage);

    if (passed)
    {
        printf("result: passed in all subjects\n");
    }
    else
    {
        printf("result: failed (scored below 40 in one or more subjects)\n");
    }

    printf("grade: %c\n", grade);

    return 0;
}
