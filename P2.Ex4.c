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
  
  
  for(int i=0;i<N/2;i++){
    arr[i]=arr[N-1];   
    N--;
  }
  
 
  for(int k=0;k<N;k++){
      printf("%d", arr[k]);
  }
 
   return 0;
}
