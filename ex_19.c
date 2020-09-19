/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 01
    Author: Aldrin Marques
    Since: 12/09/2020
    Function: read two float and calculate the 4 math basics.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil

    // Variables
    float n1, n2;

    //Input
    printf("Input the 1° value: ");
    scanf("%f", &n1);
    printf("Input the 2° value: ");
    scanf("%f", &n2);

    //Output
    system("cls");
    printf("Operations");
    printf("\nAddition: %0.1f + %0.1f = %0.1f", n1, n2, n1+n2);
    printf("\nSubtraction: %0.1f - %0.1f = %0.1f", n1, n2, n1-n2);
    printf("\nMultiplication: %0.1f * %0.1f = %0.1f", n1, n2, n1*n2);
    printf("\nDivision: %0.1f / %0.1f = %0.1f", n1, n2, n1/n2);   
}