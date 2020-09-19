/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 04
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Calculate how many litters is spended with a car who does 12km p/ litter
    Distance = Time * Velocity | Used_Litters = Distance / 12 .
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    float v = 0, ul = 0;
    int d = 0, t = 0;

    // Input
    printf("Input the time (Minutes): ");
    scanf("%d", &t);
    printf("\nInput the average velocity (Km/h): ");
    scanf("%f", &v);

    // Operation
    d = (v * t);
    ul = (d / 12);

    // Output
    printf("the distance was %d Km with a average velocity of %0.1f\n", d, v);
    printf("in %d minutes, and %0.1f litters of gas was used.", t, ul);

}