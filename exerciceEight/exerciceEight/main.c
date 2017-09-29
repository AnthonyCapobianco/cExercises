//
//  main.c
//  exerciceEight
//
//  Created by Anthony Capobianco on 30/09/2017.
//  Copyright © 2017 Anthony Capobianco. All rights reserved.
//

#include <stdio.h>

int main() {
    /*
     programme qui demande trois cotes sur 20 et
     calcule la moyenne sur 100.
     */
    float noteOne, noteTwo, noteThree, meanNotesHundred, meanNotesTwenty;
    //première cote
    printf("Première note sur 20: \n");
    scanf("%f", &noteOne);
    //deuxième cote
    printf("Deuxième note sur 20: \n");
    scanf("%f", &noteTwo);
    //troisième cote
    printf("Troisième note sur 20: \n");
    scanf("%f", &noteThree);
    
    //Calcule des moyennes sur 20 et sur 100
    meanNotesTwenty = (noteOne + noteTwo + noteThree)/3;
    meanNotesHundred = meanNotesTwenty*5;
    
    printf("La moyenne sur 20 est de: %f \n La moyenne sur 100 est de: %f \n",meanNotesTwenty,meanNotesHundred);
    
    return 0;
}
