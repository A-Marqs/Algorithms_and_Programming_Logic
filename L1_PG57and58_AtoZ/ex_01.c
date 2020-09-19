/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 01
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: read one temperature in Celsius and Convert to Fahrenheit | F = (9*C + 160) .
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    float C = 0, F = 0;

    // Input
    printf("Input a Celsius Temperature: ");
    scanf("%f", &C);

    // Operation
    F = ((9*C)+160)/5;

    // Output
    printf("\n%0.1f Celsius degree is %0.1f in Fahrenheit degree", C, F);
}