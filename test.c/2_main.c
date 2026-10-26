//202610125226
//谯海权
#include <stdio.h>

int Measure(float num);
int main (void)
{
    float num;
    scanf("%f",&num);
    Measure(num);
    return 0;
}

int Measure(float num)
{
    if(num>0)
    {
        printf("正数\n");
    }
    else if(num<0)
    {
        printf("负数\n");
    }
    else
    {
        printf("0不是正数也不是负数\n");
    }
}
