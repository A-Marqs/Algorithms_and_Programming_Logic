/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 16
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Read a salary and assign a percentage increseread a salary.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    float s = 0, a = 0, ns = 0;

    // Input
    printf("Input a Salary: ");
    scanf("%f", &s);
    printf("\nInput a percentage to increase: ");
    scanf("%f", &a);

    // Output
    ns = ((a/100) * s);
    printf("\nThe new salary is %0.2f", s + ns);
}