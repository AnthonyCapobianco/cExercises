//
//  main.c
//  exerciceSix
//
//  Created by Anthony Capobianco on 28/09/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main() {
    /*
     programme qui demande le salaire horaire brut, le
     nombre d’heures prestées et le taux de retenue. Ensuite le programme
     calcule et affiche le salaire brut total, le montant de la retenue et le
     salaire net total.
     */
    float grossRevenue, hoursPrested, keepRate, totGrossRevenue, totKeepRate, totNetRevenue;
    
    //ask for the value of the original vars
    //define grossRevenue
    printf("Quel est le salaire horaire brut? \n");
    scanf("%f", &grossRevenue);
    //define hoursPrested
    printf("Quel est le d'heures prestée? \n");
    scanf("%f", &hoursPrested);
    //define the keepRate
    printf("Quel est le taux de retenue? \n");
    scanf("%f", &keepRate);
    // put it in percent
    keepRate = keepRate/100;
    
    //defining the end variables to be computed
    totGrossRevenue = hoursPrested * grossRevenue;
    totKeepRate = keepRate * totGrossRevenue;
    totNetRevenue = totGrossRevenue - totKeepRate;
    
    //print the result to the user.
    printf("Le salaire total horaire brut est de: %f \n Le montant de la retenue est de: %21f \n Le salaire net total est de: %f \n", totGrossRevenue, totKeepRate, totNetRevenue);
    

    return 0;
}
