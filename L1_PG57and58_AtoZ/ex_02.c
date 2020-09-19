/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 02
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: read one temperature in Fahrenheit and Convert to Celsius | C = ((F - 32) * 5) / 9 . 
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
    printf("Input a Fahrenheit Temperature: ");
    scanf("%f", &F);

    // Operation
    C = ((F - 32)*5)/9;

    // Output
    printf("\n%0.1f Fahrenheit degree is %0.1f Celsius degree", F, C);
}