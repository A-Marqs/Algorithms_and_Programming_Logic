/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 12
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Made an algorithm that convert Real to Dollar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    float r = 0, dc = 0;

    // Input
    printf("Input the Dollar price: ");
    scanf("%f", &dc);
    printf("\nInput the real value: ");
    scanf("%f", &r);

    // Output
    printf("R$ %0.2f = USD$ %0.2f", r, r * dc);
}