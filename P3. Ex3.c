// 3. Найти все простые числа, меньшие данного n

#include <stdio.h>

int main(){

int n, i, j;

printf("Please enter n: ");
scanf("%d", &n);

  if(n==0||n==1){
    do{
  printf("This number is not prime. Please, try again. Enter n: ");
          scanf("%d", &n);
   } while(n==0||n==1);
  }
    for(i=2;i<n;i++){

    int f = 0;
    for (j=2;j<i;j++){
        if(i%j==0){
        f=1;
        break;
        }
     }
       if (f==0)
       printf(" %d",i);
       }
    return(0);
}
