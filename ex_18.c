/*  
    Exercise of the book: Algoritmos e Lógica de Programação (Manzano e Figueiredo)
    List 01 | Page 57 and 58 | A to Z | Exercise 18
    Author: Aldrin Marques
    Since: 07/09/2020
    Function: Read a valid, null and white for three candidates;
    show the total of votes in general;
    show the valid votes of total;
    show the percentual of every candidate of total;
    show the percentual of null of the total;
    show the percentual of white of the total.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    system("cls"); // Clear the Screen
    setlocale(LC_ALL, "Portuguese"); // System language in Brazil
     
    // Var
    float v1 = 0, v2 = 0, v3 = 0, vv = 0, w = 0, n = 0, t = 0;

    // Input
    printf(" - - - - - E L E C T I O N S - - - -\n");
    printf("Input the votes of Candidate 1: ");
    scanf("%f", &v1);
    printf("Input the votes of Candidate 2: ");
    scanf("%f", &v2);
    printf("Input the votes of Candidate 3: ");
    scanf("%f", &v3);
    printf("          Input the null votes: ");
    scanf("%f", &n);
    printf("         Input the white votes: ");
    scanf("%f", &w);

    // Output
    t = (v1 + v2 + v3 + n + w);
    vv = (v1 + v2 + v3);
    printf("\nFinal Numbers");
    printf("\nTotal: %0.0f votes", t);
    printf("\nValid Votes: %0.0f votes", vv);
    printf("\nNull Votes : %0.2f % | %0.0f votes", n/t, n);
    printf("\nWhite Votes: %0.2f % | %0.0f votes", w/t, w);
    printf("\nCandidate A: %0.2f % | %0.0f votes", v1/t, v1);
    printf("\nCandidate B: %0.2f % | %0.0f votes", v2/t, v2);
    printf("\nCandidate C: %0.2f % | %0.0f votes", v3/t, v3);
}
