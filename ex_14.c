/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 14
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Build an algorithm that reads three integers and show the square of sum of them.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    int n1 = 0, n2 = 0, n3 = 0, r = 0;

    // Input
    printf("Input the 1st number: ");
    scanf("%d", &n1);
    printf("Input the 2nd number: ");
    scanf("%d", &n2);
    printf("Input the 3rd number: ");
    scanf("%d", &n3);

    // Output
    r = (n1 + n2 + n3);
    printf("%d + %d + %d = %d | %d² = %d", n1, n2, n3, r, r, r*r);
}