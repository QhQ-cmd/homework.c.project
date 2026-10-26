//202610125226
//谯海权
#include <stdio.h>

void Measure(float a,float b,float c);

int main(void)
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    Measure(a,b,c);
    return 0;
}

void Measure(float a,float b,float c)
{
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("三角形存在\n");
    }
    else
    {
        printf("三角形不存在\n");
    }
}
