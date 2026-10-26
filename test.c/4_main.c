#include <stdio.h>

void Measure(float grade);

int main(void)
{
    float grade = 0;
    scanf("%f",&grade);
    Measure(grade);
    return 0;
}

void Measure(float grade)
{
    if(grade>=90)
    {
        printf("A\n");
    }
    else if(grade>=80)
    {
        printf("B\n");
    }
    else if(grade>=70)
    {
        printf("C\n");
    }
    else if(grade>=60)
    {
        printf("D\n");
    }
    else if(grade>=0)
    {
        printf("E\n");
    }
    else
    {
        printf("输入错误\n");
    }
}
