#include <stdio.h>

//Desafio de Xadrez - Novato

int main(){

//Variáveis
int numero;
int bispo;
int torre;
int rainha;
int cavalo;

//Entrada de dados
printf("Digite o número da peça que deseja movimentar:\n");
printf("[ 1 ] Bispo\n");
printf("[ 2 ] Torre\n");
printf("[ 3 ] Rainha\n");
printf("[ 4 ] Cavalo\n");
scanf(" %i", &numero);

//Saída
//Movimento do bispo
if (numero == 1){
    for (bispo=1; bispo<=5; bispo++)
    {
    printf("Diagonal superior direita\n");
    }}
//Movimento da torre
else if (numero == 2){
    for (torre=1; torre<=5; torre++)
    {
    printf("Direita\n");
    }}
//movimento rainha
else if (numero == 3){
    for (rainha=1; rainha<=8; rainha++)
    {
    printf("Esquerda\n");
    }}

cavalo = 1;
 do {  
    printf("Baixo e Esquerda\n");
    cavalo++;
    } while (cavalo<=5);

    return 0;
}