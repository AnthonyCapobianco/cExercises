//
//  main.c
//  meanCalc.c
//
//  Created by Anthony Capobianco on 19/09/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main() {
    int nOne, nTwo, sum, prod, diff;
    printf("Enter number one: \n");
    scanf("%i", &nOne);
    printf("Enter number two: \n");
    scanf("%i", &nTwo);
    
    sum=nOne+nTwo;
    prod=nOne*nTwo;
    diff=nOne/nTwo;
    
    printf("The sum is equal to: %sum", &sum);
    
    return 0;
}
