//
//  main.c
//  exerciceFive.c
//
//  Created by Anthony Capobianco on 26/09/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>
#define TVA 0.21

int main() {
    /* prix d’un article et du
     taux de TVA, calcule et affiche le montant de la TVA et le prix TVA
     comprise. Taux constant.*/
    
    float prixHTVA, montantTVA, prixTVAC;
    printf("Prix?\n");
    scanf("%f", &prixHTVA);
    montantTVA = TVA * prixHTVA;
    prixTVAC = montantTVA + prixHTVA;
    
    printf("le montant de la TVA est de: %f \n et le prix TVA comprise est de: %f \n", montantTVA, prixTVAC);
    return 0;
}
