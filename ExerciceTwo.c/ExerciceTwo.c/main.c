//
//  main.c
//  ExerciceTwo.c
//
//  Created by Anthony Capobianco on 26/09/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main() {
    float r, surf, circ;
    /*
     r -> rayon
     surf -> surface
     circ -> circonférence
     */
    printf("Veuillez indiquer le rayon du cercle: \n");
    scanf("%f", &r);
    surf = M_PI*r*r;
    circ = 2*M_PI*r;
    printf("La circonférence du cercle est de: %f\n", circ);
    printf("La surface du cercle est de: %f", surf);
    return 0;
}
