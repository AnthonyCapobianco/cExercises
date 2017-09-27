//
//  main.c
//  ExerciseFour.c
//
//  Created by Anthony Capobianco on 26/09/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    // demande la base d’un triangle
    //équilatéral et en calcule et affiche le périmètre et l’aire.
    int base, peri, aire, hauteur;
    
    printf("Veuillez indiquer la longueur de la base du triangle équilatéral: \n");
    scanf("%i", &base );
    hauteur = sqrt(base^2 +(base/2)^2);
    peri = 3*base;
    aire = base*hauteur/2;
    printf("Le triangle a un périmètre de %i \n et une aire de %i \n", peri, aire);
    return 0;
}
