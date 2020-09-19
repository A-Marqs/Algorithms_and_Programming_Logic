/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 05
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Make an algorithm that calculate the value of a installment
    Installment = Value + (Value * (Taxes/100) * Time) .
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    float ins = 0, vl = 0, tx = 0, t = 0;

    // Input
    printf("Input the value of installment: ");
    scanf("%f", &vl);
    printf("\nInput the value of taxes per month (%): ");
    scanf("%f", &tx);
    printf("\nInput the months: ");
    scanf("%f", &t);

    // Operation
    ins =  (vl + (vl * (tx / 100) * t));

    // Output
    printf("\nThe value of installment %0.2f", ins);
}