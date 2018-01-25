// Programme qui demande deux nombres entiers, en 
// calcule la somme, le produit, la différence et ensuite 
// affiche les résultats.
#include <stdio.h>

#define echoMath(c,x) printf("\n"c" de %i et %i = %i", u[0], u[1], x)
int main(void) 
{
    int u[2];// Array of ints defined by user.
    int i = 0;// Iterator
    int valid = 0;
    
    for (;i < 2; ++i)
    {
        printf("Veuillez introduire le nombre entier positif numéro %i: ", (i + 1));
        do valid = scanf("%i", &u[i]); 
        while (!valid); 
    }

    echoMath("Somme", (u[0] * u[1]));
    echoMath("Produit", (u[0] + u[1]));
    echoMath("Difference", (u[0] - u[1]));
    return(0);
}