/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 09
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Read a Integer and elevate him.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    int n1 = 0;

    // Input
    printf("Input a number: ");
    scanf("%d", &n1);

    // Output
    printf("this number in square is %d", n1 * n1);
}