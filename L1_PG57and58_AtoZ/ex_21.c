/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 01
    Author: Aldrin Marques
    Since: 12/09/2020
    Function: calculate and show a volume of a sphere.
    Volume = (4.3) * 3.14159 * (Radius ^ 3)
    
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil

    // Var
    float r, v;

    // Input
    printf("Input the radius of the sphere: ");
    scanf("%f", &r);

    // Output
    v = (4.3) * 3.14159 * (pow(r,3));
    printf("the volume is %0.2fcm³", v);

}