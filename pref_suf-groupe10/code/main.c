/**
 * main.c
 * 
 * Ce fichier contient la fonction main() du programme d'utilisation de la bibliothèque prefixe_suffixe.h
 *
 * @author: RUSSE Cyril
 * @date: 28-07-2020
 * @projet: INFO0947 Projet 1
 */

#include <stdio.h>

#include "prefixe_suffixe.h"

int main(){
    
    int T[] = {1,4,2,4,5,1,4,2,4};
    int lg = prefixe_suffixe(T, 9);
    printf("longueur: %d\n", lg);


    return 0;
}