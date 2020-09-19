/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 01
    Author: Aldrin Marques
    Since: 12/09/2020
    Function: calculate the square root of a number.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil

    // Var
    int n1;

    // Input
    printf("Input a number: ");
    scanf("%d", &n1);

    // Output
    printf("The square root of %d is %0.2f", n1, sqrt(n1));
}