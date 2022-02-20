#include <math.h>


int main(){

    int n, i=1, k=1;
    float x;
    double c;


    printf("Enter n\n");
    scanf("%d",&n);
    printf("Enter x\n");
    scanf("%f", &x);


    while(i<=n){

        k = k * i;
        c = c + pow(-1,i) * pow(x,2*i)/2*k;
        ++i;
    }

    printf("%lf", c);
    return 0;
}
