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
  
  
   return 0;
}

// либо через 2 счетчика

// доделать через два счетчика

#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b; 
    *b = temp;
}

int main(){
    
 int N;

  printf("Enter N: ");
  scanf("%d", &N);   
  
  int arr[N];
  for(int i=0;i<N;i++){
     printf("Enter arr[i]: ");
     scanf("%d", &arr[i]);  
  }
  
  if(N%2==0){
    for(int i=0,j=N-1 ; i<=N/2 && j >= N/2; i++, j-- )
     
    swap(&arr[i],&arr[j]); 
  
  } else if(N%2!=0){
    for(int i=0,j=N-1 ; i<=N/2 && j >= N/2; i++, j-- )  
      
      
  }
  
   return 0;
}
