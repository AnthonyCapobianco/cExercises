//
//  main.c
//  meanCalc.c
//
//  Created by Anthony Capobianco on 19/09/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main() {
    int nOne, nTwo, sum, prod;
    double diff;
    printf("Enter number one: \n");
    scanf("%i", &nOne);
    printf("Enter number two: \n");
    scanf("%i", &nTwo);
    
    sum=nOne+nTwo;
    prod=nOne*nTwo;
    diff=nOne/(float)nTwo;
    
    printf("La somme vaut: %i \n le produit vaut: %i \n Et la différence est de: %f \n", sum, prod, diff);
    
    return 0;
}
