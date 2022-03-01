//Найти среднее арифметическое элементов и количество элементов, меньших этого среднего.

#include <stdio.h>

int main(){
    
 int N;
 int s=0,k;

 int arr[N];
 printf("Enter N: ");
 scanf("%d", &N);   
    
 for(int i=0;i<N;i++){
    printf("Enter arr[i]: ");
    scanf("%d", &arr[i]);
 }    
   for(int i=0;i<N;i++){
      s+=arr[i]; 
      k=s;
   } 
   int c=0;
   for(int i=0;i<N;i++){
       if(arr[i]<(k/N)){
        c+=1;
       } 
   }
   printf("K: %d \n", k/N); //  среднее арифметическое
   printf("C: %d", c); // с - количество элементов < ср.арифм.
   
   return 0;
}
