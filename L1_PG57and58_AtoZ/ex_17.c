/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 17
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Calculate and show the result of an area of a circunference | A = Pi * R ^ 2.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    float pi = 3.14159, r = 0, a = 0;
    
    // Input
    printf("Input the Radius: ");
    scanf("%f", &r);

    // Output
    a = pi * r;
    printf("the area is %0.2f cmÂ²", a * a);
}