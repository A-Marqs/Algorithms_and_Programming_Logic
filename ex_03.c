/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 03
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Calculate and show the volume of the oil can | Volume = Pi * Radius ^ 2 * Height.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    float pi = 3.14159 , r = 0, he = 0, vol = 0;

    // Input
    printf("Input the Radius (cm): ");
    scanf("%f", &r);
    printf("\nInput the Height (cm): ");
    scanf("%f", &he);

    //Operation
    vol = pi * r*r * he;

    // Output
    printf("\n%0.1f cm³", vol);
}