#include <stdio.h>
#include <time.h>

typedef struct{
    char nome[41];
    int diaNasc, mesNasc, anoNasc;
}nascimento_pessoa;

int main() {
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    
    /*dia atual, mes atual e ano atual*/
    int da = tm.tm_mday;
    int ma = tm.tm_mon + 1;
    int aa = tm.tm_year + 1900;
    
    printf("%d de %d de %d\n", da, ma, aa);
    
    int idades[3];
    
    nascimento_pessoa pessoas[3] = {
    {"Cleber", 14, 03, 1985},
    {"Rodolfo", 27, 12, 1999},
    {"Zeca", 05, 04, 2002}
};

   for(int i=0; i<3; i++) {
       if(pessoas[i].mesNasc < ma) {
           idades[i] = (aa - pessoas[i].anoNasc);
       } else if(pessoas[i].mesNasc == ma){
           if(pessoas[i].diaNasc <= da) {
              idades[i] = (aa - pessoas[i].anoNasc); 
           } else {
               idades[i] = (aa - pessoas[i].anoNasc) - 1;
           }
       } else {
           idades[i] = (aa - pessoas[i].anoNasc) - 1;
       }
   }
   
   for(int i=0; i<3; i++) {
       printf("%s tem %d anos de idade.\n", pessoas[i].nome, idades[i]);
   }

    return 0;
}