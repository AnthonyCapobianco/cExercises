//
//  exerciceThree.c
//  exerciceThree
//
//  Created by Anthony Capobianco on 26/09/2017.
//

#include <stdio.h>

int main(){
    int rectLong, rectLarg, rectSurf, rectPeri;
    printf("Veuillez indiquer la longueur du rectangle: \n");
    scanf("%i", &rectLong);
    printf("Veuillez indiquer la longueur du rectangle: \n");
    scanf("%i", &rectLarg);
    rectSurf = rectLong * rectLarg;
    rectPeri = 2*(rectLong + rectLarg);
    
    printf("La surface du rectangle est de %i \n Le perimetre du rectangle est de %i \n", rectSurf, rectPeri);
    return 0;
    
}

