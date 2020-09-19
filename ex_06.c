/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 06
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Read two number for variables A and B, and exchange the value between.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    int a = 0, b = 0, pa = 0, pb = 0;

    // Input
    printf("Input the 1st number: ");
    scanf("%d", &a);
    printf("\nInput the 2nd number: ");
    scanf("%d", &b);

    // Operations
    pa = b;
    pb = a;

    // Output
    printf("\nA  : %d B  : %d\npA : %d pB : %d", a, b, pa, pb);
}