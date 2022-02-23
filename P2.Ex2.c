#include <stdio.h>
#include <math.h>

int main(){
    
    int n,s,i,j;
    double cos=0, x;
    
    printf("Please enter x: ");
    scanf("%lf", &x);
    printf("Please enter n: ");
    scanf("%d", &n);
    
    for(i=0;i<=n;i++){
        
     for(j=0;j<=2*i;j++){
         if(j==0){
            s=1; 
         } else {
             s*=j;
         }
     }   
     cos+=pow(-1,i)*pow(x,2*i)/s ;   
        
    }
    printf("cos(x)=%lf", cos);
    return 0;
}
