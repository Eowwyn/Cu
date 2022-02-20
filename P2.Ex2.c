#include <stdio.h>

int main()
{
    double x;//сам х
    double cos = 1;//общая сумма
    double down = 1;//знаменатель(факториал)
    double up = x*x;//числитель (увеличение степени х на 2)
    int n ; // точность

    printf("Enter E: \n");
    scanf("%d", n);
    
    int i;
    printf("Enter x: ");
    scanf("%lf", &x);
    for (i = 2; i < n; i+=2)//сразу с 2 и по 2 в будущем
    {
        up *= (-1)*up;//контроль -1 и увеличение степени х
        down *= (i-1) * i; //факториал
        cos += up / down; //добавление следующего компонента
    }
    printf("result: %lf\n", x);

    return 0;
}
