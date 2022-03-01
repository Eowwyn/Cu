#include <stdio.h>

int main(){
    
  int N,s=0;
  printf("Enter N: ");
  scanf("%d", &N);
  
  int arr[N];  
  
  for(int i=0;i<N;i++){
    printf("Enter arr[i]: ");
    scanf("%d", &arr[i]); 
  } 
  
  for(int i=0;i<N-1;i++){
      if(arr[i]>arr[i+1]){
        s+=1; 
      } else {
        s+=0;
      }
  }
  printf("%d \n", s);
  if(s==0){
    printf("Yes");  
  } else {
    printf("No");
  }
  return 0;
}
