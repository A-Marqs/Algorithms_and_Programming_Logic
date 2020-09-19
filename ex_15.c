/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 15
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Read four integers, multiply the first and third and sum the second and forth.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, p = 0, s = 0;
    
    // Input
    printf("Input the 1st number: ");
    scanf("%d", &n1);
    printf("\nInput the 2nd number: ");
    scanf("%d", &n2);
    printf("\nInput the 3rd number: ");
    scanf("%d", &n3);
    printf("\nInput the 4th number: ");
    scanf("%d", &n4);
   
    // Output
   printf("%d + %d = %d\n", n2, n4, n2 + n4);
   printf("%d . %d = %d", n1, n3, n1 * n3); 
}