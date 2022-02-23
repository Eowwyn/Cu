// Программа возведения числа в квадрат

#include <stdio.h>
#include <math.h>

int main(){
    
    int n,i,s=0;
    
    printf("Please enter n: ");
    scanf("%d", &n);
    
    if(n==1){
       s=1; 
     } else if(n>1){
        for(i=1;i<=2*n-1; i = i+2){
            s = s + i;
        }
     }
    printf("%d", s);
    return 0;
}
