/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 07
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Read four integers and show the results of the additions and multiplications.
    A - B | A - C | A - D | B - C | B - D | C - D .
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    int a = 0, b = 0, c = 0, d = 0;

    // Input
    printf("Input A: ");
    scanf("%d", &a);
    printf("\nInput B: ");
    scanf("%d", &b);
    printf("\nInput C: ");
    scanf("%d", &c);
    printf("\nInput D: ");
    scanf("%d", &d);

    // Output
    printf("\nAdditions:\n");
    printf("A + B = %d\n", a + b);
    printf("A + C = %d\n", a + c);
    printf("A + D = %d\n", a + d);
    printf("B + C = %d\n", b + c);
    printf("B + D = %d\n", b + d);
    printf("C + D = %d\n", c + d);
    printf("\nMultiplications:\n");
    printf("A . B = %d\n", a * b);
    printf("A . C = %d\n", a * c);
    printf("A . D = %d\n", a * d);
    printf("B . C = %d\n", b * c);
    printf("B . D = %d\n", b * d);
    printf("C . D = %d\n", c * d);
}