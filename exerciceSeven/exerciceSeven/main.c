//
//  main.c
//  exerciceSeven
//
//  Created by Anthony Capobianco on 29/09/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main() {
    /*
     programme qui lit deux nombres entiers et en
     calcule le quotient.
     */
    float quotient;
    int nOne, nTwo;
    printf("Numérateur? \n");
    scanf("%i", &nOne);
    printf("Dénomintaeur\n");
    scanf("%i", &nTwo);
    if (nTwo != 0){
    }else{
        printf("Le dénominateur ne peut pas être égale à zéro, veillez entrer un dénominateur valide: \n");
        scanf("%i", &nTwo);
    }
    quotient = nOne/(float)nTwo;
    printf("Le quotient est de %f", quotient);
    return 0;
}
