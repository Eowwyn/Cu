// Обменять местами максимальный и минимальный элементы массива. Вывести измененный массив.

#include <stdio.h>
#define N 255
int main(){
    
    int N; 
    printf("Enter N: ");
    scanf("%d", &N);
    
    int b,s,k;
    int arr[N];
    int max = arr[0];

    for(int i=0;i<N;i++){
        printf("Enter arr[i]: ");
        scanf("%d", &arr[i]);
        
        if(arr[i]>max){
            max = arr[i];
            b = i;
        }
    }
    int min = arr[0];
     for(int i=0;i<N;i++){
         if(arr[i]<min){
            min = arr[i];
            s = i;
        }
     }
     k = arr[s];
     arr[s] = arr[b];
     arr[b] = k;
     for(int i=0;i<N;i++){
         printf("%d", arr[i]);
        }
    return 0;
}
