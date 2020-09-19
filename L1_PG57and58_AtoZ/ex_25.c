/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 01
    Author: Aldrin Marques
    Since: 12/09/2020
    Function: read a integer and show the sucessor and predecesssor.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil

    // Var
    int n;

    // Input
    printf("Input a number: ");
    scanf("%d", &n);

    // Output
    printf("Predecessor: %d", (n - 1));
    printf("\nNumber: %d", n);
    printf("\nSucessor: %d", (n + 1));
}