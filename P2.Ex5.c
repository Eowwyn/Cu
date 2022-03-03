#include <stdio.h>

int main(){
    
    int N;
    printf("Enter N: ");
    scanf("%d", &N);
    
    int arr[N],arr2[N],arr3[N];
    for(int i=0;i<N;i++){
        printf("Enter arr[i]: ");
        scanf("%d", &arr[i]);
    }
    
    for(int i = 0;i<N;i++){
        if(arr[i]%2!=0){
            arr3[i]=arr[i];
        } else if(arr[i]%2==0){
            arr2[i]=arr[i];
        }
    }
    for(int i=0;i<N;i++){
       if(arr3[i]!=0){
        printf("%d", arr3[i]);   
       }
   }    
   for(int i=0;i<N;i++){
       if(arr2[i]!=0){
        printf("%d", arr2[i]);   
       }
   }
   
   // solve problem with zeroes (for arr2[i])
    return 0;
}
