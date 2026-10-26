#include<stdio.h>
void main(){
//Entrada de dados e como conseguir o endereço da variavel na memo ram
int idade;
 char Nome[] = "";  // Esse assim que faz a entrada de uma string (deixando a array vazia para que tenha a entrada)
// O & e usado para identificar o endereço no scan e necessario dar o endereço da variavel



printf("Qual seu nome?: ");
scanf("%s",&Nome);
printf("O seu nome è : %s \n",Nome);


printf("Qual a sua idade?");
scanf("%i",&idade);
printf("\n Sua idade é : %i ",idade);
printf("o endereço da variavel é : %p",&idade);

}