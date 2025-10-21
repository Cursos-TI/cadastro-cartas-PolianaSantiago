
#include <stdio.h>

int main(){
   char Carta[10]= "2";
   char Estado [50]="Rio de Janeiro";
   char Codigo [4]="B02";
   char Nome_da_cidade [15]= "Niterói";
   int Populaçao= 481.749;
   float Area=133.757;
   float PIB= 66.3;
   int Numero_de_pontos_turisticos= 10;

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