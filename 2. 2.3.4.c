#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 1024

// Schitaem glasnie bukovki
int glasnie_bukovki(char t){
     char glas[] = "eEyYuUiIoOaA";
     int L = strlen(glas);
         for(int i = 0; i < L; i++){ 
             if(t == glas[i]){
                 return 1;
             } else {
                 return 0;
             }
         }
}


// Proverka + print
void proverka_printf(char *string){
     if (string == NULL) //obnulenie pokazatelya
            return;
        int gl = 0, sgl = 0;  
        int k = 0, p;
        for(int i = 0; string[i] != '\0'; i++){ //until not end
            if(!ispunct(string[i])){
               ++k; 
            }
            else if(ispunct(string[i])){ //smotrim na head
               for(int j = 0; j < k ; j++){
                    if(glasnie_bukovki(string[j]) == 1){
                        ++gl; 
                    } else {
                        ++sgl;
                    }
               }
               if(sgl > gl){
                  gl = 0;
                  sgl = 0;
                   //
               } else {
                  for(int p = 0; string[p] != '\0' && k != 1; p++){
                      string[p] = string[p + 1];
                      --k;
                  }
                  //
               }
               int p = 0;
               while(!ispunct(string[i])){
                ++p;  
               }
               i = p + k + i;
               k = 0;
            } 
        }
}  

int main() {
  
  char strochka[N];
  printf("Bruh, enter: ");
  gets(strochka);
  
  proverka_printf(strochka);
  
  puts(strochka);  
    return 0;
}
