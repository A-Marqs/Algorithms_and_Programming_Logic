/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 10
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Read two Integers and show the result of square of the diference in between.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    int n1 = 0, n2 = 0, r = 0;

    // Input
    printf("Input the 1st number: ");
    scanf("%d", &n1);
    printf("\nInput the 2nd number: ");
    scanf("%d", &n2);

    // Output
    r = (n1 - n2);
    printf("%d - %d = %d \n%dÂ² = %d", n1, n2, r, r, r*r);
        
}   
