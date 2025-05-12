#include <stdio.h>

int main(){

           int Carta;
           char Estado[1];
           int numero;
           char cidade[50];
           int populaçao;
           float PIB;
           int PT;
           float area;

           printf("Olá, vamos começar com a sua primeira carta, Digite o estado de A a H: \n");
           scanf("%s", &Estado);

           printf("Agora, digite o numero da carta: \n");
           scanf("%d", &numero);

           printf("Agora, digite o nome da cidade da sua carta: \n");
           scanf("%s", cidade);

           printf("Agora, digite a população dela: \n");
           scanf("%d", &populaçao);

           printf("Agora, didite a area dela: \n");
           scanf("%f", &area);

           printf("Agora, o PIB: \n");
           scanf("%f", &PIB);

           printf("Agora, digite quantos pontos turisticos tem a sua carta: \n");
           scanf("%d", &PT);

           printf("Carta: %s%d\n", Estado, numero);
           printf("Cidade: %s \n", cidade);
           printf("População: %d\n", populaçao);
           printf("PIB: %f\n", PIB);
           printf("Pontos Turisticos: %d\n", PT);  
           printf("Area: %f\n", area);

}
    

