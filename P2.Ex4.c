#include <stdio.h>

int main(){
    
 int N;

  printf("Enter N: ");
  scanf("%d", &N);   
  
  int arr[N];
  for(int i=0;i<N;i++){
     printf("Enter arr[i]: ");
     scanf("%d", &arr[i]);  
  }
  
  for(int i=N-1;i>=0;i--){
    printf("%d", arr[i]);  
  }
  
   return 0;
}
