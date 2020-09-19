/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 01
    Author: Aldrin Marques
    Since: 12/09/2020
    Function: calculate and show m/s the value of velocity of a bullet.
    Velocity = (Distance * 1000) / (Time * 60).
    
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil

    // Var
    int d, t;
    float v;

    // Input
    printf("Input the distance in kilometers: ");
    scanf("%d", &d);
    printf("Input the time in minutes: ");
    scanf("%d", &t);

    // Output
    v = (d * 1000) / (t * 60);
    printf("The velocit of a bullet is %0.1f km/s", v);
}