/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 01
    Author: Aldrin Marques
    Since: 12/09/2020
    Function: read two integers that be represent the base and expoent, and calculate.     
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil

    // Var
    int n1, n2, p;

    // Input
    printf("Input the 1° number: ");
    scanf("%d", &n1);
    printf("Input the 2° number: ");
    scanf("%d", &n2);

    // Output
    p = pow(n1, n2);
    printf("%d ^ %d = %d", n1, n2, p);
}