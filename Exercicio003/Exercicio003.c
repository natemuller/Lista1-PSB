/*
Exercicio003.c
Feito por Natan de Aragão Müller no dia 07/08/2025 às 20h07

Enunciado: Escreva um programa que recebe um horário (como valores inteiros correspondendo a horas, minutos e segundos)
e que calcule quantos segundos já se passaram desde que o dia começou
*/

#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    scanf("%d %d %d", &horas, &minutos, &segundos);

   //Um dia tem 86400 segundos, segundo o google.

   segundos += (horas * 3600);
   segundos += (minutos * 60);

   printf("%d", (86400 - segundos));
}