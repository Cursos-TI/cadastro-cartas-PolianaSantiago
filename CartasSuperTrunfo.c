#include <stdio.h>

int main(){
   char Carta[10]= "1";
   char Estado [10]="São Paulo";
   char Codigo [4]="A01";
   char Nome_da_cidade [15]= "Ribeirão Preto";
   int Populaçao= 731639;
   float Area= 650.916;
   float PIB= 83.411;
   int Numero_de_pontos_turisticos=15;

   printf("Carta %s:\n", Carta);
   printf("Estado: %s\n", Estado);
   printf("Codigo: %s\n", Codigo);
   printf("Nome da Cidade: %s\n", Nome_da_cidade);
   printf("Populaçao: %d\n", Populaçao);
   printf("Area: %.3f km²\n", Area);
   printf("PIB: %.3f bilhões\n", PIB);
   printf("Numero-de-pontos-turisticos: %d\n", Numero_de_pontos_turisticos);

return 0;
} 
