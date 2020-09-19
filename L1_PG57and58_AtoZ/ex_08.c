/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 08
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Write an algorithm that calculates and show the volume of an retangular box
    Volume = Height * Width * Length . 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    float vl = 0, le = 0, wi = 0, he = 0;

    // Input
    printf("Input the heigth: ");
    scanf("%f", &he);
    printf("Input the width: ");
    scanf("%f", &wi);
    printf("Input the length: ");
    scanf("%f", &le);

    // Operation
    vl = le*wi*he;

    // Output
    printf("the volume is %0.2f cm³", vl);
}