/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 01
    Author: Aldrin Marques
    Since: 12/09/2020
    Function: read a size in foot and show converted in meeters.
    1 foot = 30,48cm     
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil

    // Var
    float f, cm;

    // Input
    printf("Input a foot size: ");
    scanf("%f", &f);

    // Output
    cm = (30.48 * f);
    printf("%0.1f foot is %0.2fcm", f, cm);
}