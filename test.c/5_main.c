//202610125226
//谯海权
#include <stdio.h>
int main (void)
{
    float a,b;
    char op;
    scanf("%f %c %f",&a,&op,&b);
    switch(op)
    {
        case '+':
            printf("%.2f",a+b);
            break;
        case '-':
            printf("%.2f",a-b);
            break;
        case '*':
            printf("%.2f",a*b);
            break;
        case '/':
            if(b == 0)
            {
                printf("错误: 除数不能为 0\n");
                break;
            }
            printf("%.2f",a/b);
            break;
        default:
            printf("错误：不支持的运算符");
            break;
    }
    return 0;
}
