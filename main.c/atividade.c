#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Codificacao da String - Atividade 1

//Funcao Principal
int main()
{
  char t, texto[20];
  int a;

  printf("Codificar ou Decodificar?\n");
  scanf("%c", &t);

  if(t!='C' && t!='D'){
    printf("tente de novo");
  }else if(t =='C'){
    scanf("%s %c",texto,a);
      for(a=0; a < 20; a++){
        scanf("%c", a);
          switch(a){
            case 'Z':
             a == 'ZZ';
             break;
          }
        return texto;
      }
    
      
  }else if(t=='D'){
      
  }
  
  
  return 0;
}
