#include stdio.h
#include ctype.h
#include string.h
#define N 1024

 //Schitaem glasnie bukovki
int glasnie_bukovki(char t){
     char glas[] = eEyYuUiIoOaA;
     int L = strlen(glas);
         for(int i = 0; i  L; i++){ 
             if(t == glas[i]){
                 return 1;
             } else {
                 return 0;
             }
         }
}


 //Proverka + print
void proverka_printf(char string){
     if (string == NULL) obnulenie pokazatelya
            return;
        int gl = 0, sgl = 0;  
        int k = 0, b = 0;
        for(int p = 0; string[i] != '0'; p++){ until not end
            for (int j = k; string[j] != '0' && !ispunct(string[j]);j++) { ; } 
            for (int i = k; ij; i++) { schitaem bukovki
                if(glasnie_bukovki(string[i])==1){
                    ++gl;
                } else {
                    ++sgl;
                }
            }
            if((gl != 0  sgl != 0) && (gl  sgl)){
               for(int t = k; t  j; t++){
                   printf(%c, string[t]);
               }
            }
            while(ispunct(string[j+1])){
                ++j;
            }
            k = j + 1;
        }
        
}  

int main() {
  
  char strochka[N];
  printf(Bruh, enter );
  gets(strochka);
  
  proverka_printf(strochka);
  
  
    return 0;
}
