//202610125226
//谯海权
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
    if((int)grade * 100 == grade * 100)
{
    if(grade >=90 && grade <= 100)
    {
        printf("A\n");
    }
    else if(grade >=80 && grade < 90)
    {
        printf("B\n");
    }
    else if(grade >=70 && grade < 80)
    {
        printf("C\n");
    }
    else if(grade >=60 && grade < 70)
    {
        printf("D\n");
    }
    else if(grade >=0 && grade < 60)
    {
        printf("E\n");
    }
     else
    {
        printf("输入无效\n");
    }
 }
    else
    {
        printf("输入无效\n");
    }
}
