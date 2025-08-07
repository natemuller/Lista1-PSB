/*
Exercicio001.c
Feito por Natan de Aragão Müller no dia dd/08/2025 às hh:mm

Enunciado: Escreva um programa que lê uma temperatura em graus Fahrenheit (como um valor real) e faz a convers  ̃ao de
temperaturas de Fahrenheit para Celsius, imprimindo a temperatura em graus Celsius.
*/

#include <stdio.h>

int main () {

    double fahrenheit;

    scanf("%lf", &fahrenheit);

    double celsius = (5/9) * (fahrenheit - 32);

    printf("%4lf", celsius);

    return 0;
}