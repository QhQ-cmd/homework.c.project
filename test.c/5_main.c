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
            printf("%f",a+b);
            break;
        case '-':
            printf("%f",a-b);
            break;
        case '*':
            printf("%f",a*b);
            break;
        case '/':
            if(b == 0)
            {
                printf("输入错误");
                break;
            }
            printf("%f",a/b);
            break;
        case '%':
            if(b == 0)
            {
                printf("输入错误");
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
            printf("输入错误");
            break;
    }
    return 0;
}
