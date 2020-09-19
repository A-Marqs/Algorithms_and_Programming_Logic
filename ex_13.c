/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 13
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: build an algorithm that reads three integers and show the sum of them square.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    int n1 = 0, n2 = 0, n3 = 0, r = 0;
    int q1 = 0, q2 = 0, q3 = 0;

    // Input
    printf("Input the 1st number: ");
    scanf("%d", &n1);
    printf("\nInput the 2nd number: ");
    scanf("%d", &n2);
    printf("\nInput the 3rd number: ");
    scanf("%d", &n3);

    // Output
    q1 = n1 * n1;
    q2 = n2 * n2;
    q3 = n3 * n3;
    r = (q1 + q2 + q3);
    printf("%d² = %d | %d² = %d | %d² = %d", n1, q1, n2, q2, n3, q3);
    printf("\n%d + %d + %d = %d", q1, q2, q3, r);
}