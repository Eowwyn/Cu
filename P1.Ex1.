1. По натуральному числу построить число с обратным порядком цифр. Например, 2643–>3462

#include <stdio.h>

int main(){

    int n, k ;

    printf("Enter a natural number\n");
    scanf("%d", &n);

    while(n%10==0){
        n/=10;
    }
    if(n%10!=0) {
        if (n / 10 != 0) {
            do {
                k = n % 10;
                if (k != 0 && n / 10 != 0) {
                    printf("%d", k);
                } else if (k == 0 && n / 10 != 0) {
                    printf("%d", k);
                }
                n = n / 10;
            } while (n / 10 != 0);
        }
    } else if(n%10==0){
        if (n / 10 != 0) {
            do {
                k = n % 10;
                if (k != 0 && n / 10 != 0) {
                    printf("%d", k);
                } else if (k == 0 && n / 10 != 0) {
                    printf("%d", k);
                }
                n = n / 10;
            } while (n / 10 != 0);
        }
    }
    if (n!=0) {
        printf("%d", n);
    }
}
