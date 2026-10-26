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
            printf(".2%f",a+b);
            break;
        case '-':
            printf(".2%f",a-b);
            break;
        case '*':
            printf(".2%f",a*b);
            break;
        case '/':
            if(b == 0)
            {
                printf("错误:除数不能为 0");
                break;
            }
            printf(".2%f",a/b);
            break;
        case '%':
            if(b == 0)
            {
                printf("错误：取余数不能为0");
                break;
            }
            if(a == (int)a && b == (int)b)
            {           
                printf("%d",(int)a%(int)b);
                break;
            }
            else
            {
                printf("输入错误");
                break;
            }
        default:
            printf("错误：不支持的运算符");
            break;
    }
    return 0;
}
