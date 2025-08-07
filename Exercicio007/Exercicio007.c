/*
Exercicio007.c
Feito por Natan de Aragão Müller no dia 07/08/2025 às 20h23

Enunciado: Escreva um programa para automatizar um caixa de banco. O seu programa deve receber um valor inteiro R e
deve determinar o núumero de notas de 100, 50, 10, 5 e 1 reais, necessárias para pagar a quantia R. Escreva o código
de forma que o núumero de notas usado seja sempre o menor possível.
*/

#include <stdio.h>

int main() {
    int R = 0;
    int notas100 = 0;
    int notas50 = 0;
    int notas10 = 0;
    int notas5 = 0;
    int notas1 = 0;

    scanf("%d", &R);

    while (R > 0) {

        if (R >= 100) {
            R -= 100;
            notas100++;
        }

        else if (R >= 50 && R < 100) {
            R -= 50;
            notas50++;
       }
 
        else if (R >= 10 && R < 50) {
            R -= 10;
            notas10++;
        }

        else if(R >= 5 && R < 10) {
            R -= 5;
            notas5++;
        }

        else if (R >= 1 && R < 5) {
            R -= 1;
            notas1++;
        }
    }

    printf("%d %d %d %d %d", notas100, notas50, notas10, notas5, notas1);
    return 0;
}