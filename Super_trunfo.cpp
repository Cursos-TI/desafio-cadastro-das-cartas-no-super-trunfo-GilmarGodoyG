#include <stdio.h>
#include <string>
#include <cstdio> 

using namespace std;
 
 // Criando uma class para as Cartas 
 class Carta{
       public :
      const char * estado;
      const char * cidade;
      const char* codigo;
      int populacao;
       //int ponttur; nao achei numero exato dos pontos turisticos :(
      float pib;
      float area;
      float Pibcap;
      float Depopulacional ;
       };
       
       
  int main(){
             Carta carta1;
             Carta carta2;     // Criando as Carta 1 e 2 
             Carta carta3;
     carta1.estado = "SC";
     carta2.estado = "RS" ;
     carta1.cidade = "Florianopolis ";
     carta2.cidade = "Porto Alegre ";  //adicionando os atributos das cartas com base
     carta1.codigo = "A01";             // na class Carta
     carta2.codigo = "A02";
     carta1.populacao = 537211;
     carta2.populacao = 1332570;
     carta1.pib = 23.55;
     carta2.pib = 81.56;
     carta1.area = 674.8;
     carta2.area = 495.8 ;
     carta1.Pibcap = carta1.populacao / carta1.pib ;
     carta2.Pibcap = carta2.populacao / carta2.pib ;
     carta1.Depopulacional = carta1.populacao / carta1.area ;
     carta2.Depopulacional = carta2.populacao / carta2.area ;
     
     // print da Carta 1
     
     printf( "Carta 1 :%s",carta1.codigo  );
     printf( "\nEstado  :%s",carta1.estado  );
     printf( "\nCidade  :%s",carta1.cidade ); 
     printf( "\nPopulaça:%d",carta1.populacao );
     printf( "\nArea    :%f km ",carta1.area );
     printf( "\nPib     :%f bilhões ",carta1.pib  );
     printf( "\nPIB per capita :%f",carta1.Pibcap );
     printf( "\nDensidade Populacional:%f",carta1.Depopulacional);
     
     printf("\n\n")
;     // print da Carta 2
     
     
     printf( "Carta 2 :%s",carta2.codigo  );
     printf( "\nEstado  :%s",carta2.estado  );
     printf( "\nCidade  :%s",carta2.cidade ); 
     printf( "\nPopulaça:%d",carta2.populacao );
     printf( "\nArea    :%f km ",carta2.area );
     printf( "\nPib     :%f bilhões ",carta2.pib  );
     printf( "\nPIB per capita :%f",carta2.Pibcap );
     printf( "\nDensidade Populacional:%f",carta1.Depopulacional);
     
     return 0;
     
     };          
