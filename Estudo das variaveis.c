#include <stdio.h>
void main(){
//Estudo os tipos de variaveis é como imprimi-las de acordo com os tipos

char  Echar[] = "String de caracteres"; // Para fazer strings tem q utilizar arrays de letras
char Ochar = 'A';

int NumeroInteiro = 100 ;
short int Numerointshort = 102;
long int NumerointLongo = 1000;

float Numerodecimal = 3.9f; //Foi ensinado a utilizar o f no final do valor atribuido para indicar o tipo exato
double Numerodecialmaior = 3.423f;
long double NumerodecimallongoComNotacao = 3.23132-32L;


printf("Printando todos as variaveis utlizando o caracter da porcentagem para apontar o tipo de variavel");
printf("\n os variaveis que sao caracteres sao %c e \n %s",Ochar,Echar);
printf("As variaveis dos 3 tipos de int são intnormal %i\n shortint %i \n e longint %li\n ",NumeroInteiro,Numerointshort,NumerointLongo);
printf("As variaveis Sao float %f \n Double %f \n e longdouble %e",Numerodecimal,Numerodecialmaior,(double)NumerodecimallongoComNotacao);  
//com erro mostrado na aula pelo professor 


}
