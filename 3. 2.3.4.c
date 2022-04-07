include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 1024

// Schitaem glasnie bukovki
int glasnie_bukovki(char t){
     char glas[13] = "eEyYuUiIoOaA";
         for(int i = 0; i < 13; i++){ 
             if(t == glas[i]){
                 return 1;
             } else {
                 return 0;
             }
         }
}


char print(char *string, int start, int end){
          for(int j = start + 1; j < end; j++){
              printf("%c", string[j]);
              printf("%c", string[end]);
          }
}

// Proverka + print
void proverka_printf(char *str){
     if (str == NULL) //obnulenie pokazatelya
            return;
            int gl = 0, sgl = 0, k = -1;
     
     for(int i = 0; str[i] != '\0' ; i++ ){
         
         if(ispunct(str[i])){ // esli eto bukva
            if((gl != 0 || sgl != 0) && (sgl > gl)){
                print(str, k, i);
                 gl = 0;
                 sgl = 0;
                 k = i;
            } 
         } else {
               if (glasnie_bukovki(str[i]) != 0) {
                    gl++;
                } else {
                    sgl++;
                } 
            }
     }
     if ((gl != 0 || sgl != 0) && sgl > gl) {
        for (int j = k + 1; str[j] != '\0'; j++)
                printf("%c", str[j]);
        }
}  

int main() {
  
  char strochka[N];
  gets(strochka);
  
  proverka_printf(strochka);
  
    return 0;
}
