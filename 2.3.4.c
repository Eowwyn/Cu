#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define N 1024

// Schitaem glasnie bukovki
int glasnie_bukovki(char t){
     char glas[13] = "eEyYuUiIoOaA";
         for(int i = 0; i < 13; i++){ 
             if(t == glas[i]){
                 return 1;
             } 
         }
         return 0;
}


// Proverka + print
void proverka_printf(char *string){
     if (string == NULL) //obnulenie pokazatelya
            return;
        int gl = 0, sgl = 0;  
        int k = 0, f = 0, n = 0;
        while(string[k] != '\0'){ //until not end
            for (int j = k; string[j] != '\0' && !ispunct(string[j]) && string[j] != ' ';j++) { 
                 ++f; //chitaem dlinu slova
                 n = j; 
            } 
            for (int i = k; i < f; i++) { //schitaem bukovki
                if(glasnie_bukovki(string[i])==1){
                    ++gl;
                } else {
                    ++sgl;
                }
            }
            //Proverka usloviya zadachi
            if((gl != 0 || sgl != 0) && (gl < sgl)){
               for(int t = k; t < f; t++){
                   printf("%c", string[t]);
               }
            }
            while(ispunct(string[f]) || string[f] == ' '){ //find a start of a new word
                ++f;
            }  
            // write znaki prepinaniya from old word to start of new
            if(string[n + 1]!='\0' && (sgl != 0 || gl != 0) && (sgl > gl)){
               for(int t = n + 1; t < f; t++){
                   printf("%c", string[t]);
               } 
            }
            gl = 0;
            sgl = 0;
            k = f; //Stat of a new word
        }
}  

int main() {
  
  char strochka[N];
  gets(strochka);
  
  proverka_printf(strochka);
  
    return 0;
}
