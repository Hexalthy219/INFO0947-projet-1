/**
 * prefixe_suffixe.c
 * 
 * Ce fichier contient la définition de la fonction prefixe_suffixe
 * 
 * @author: RUSSE Cyril
 * @date: 28-07-2020
 * @projet: INFO0947 Projet 1
 */

#include <assert.h>

#include "prefixe_suffixe.h"
#include <stdio.h>

int prefixe_suffixe(int *T, const unsigned int N)
{
    assert(T!=0 && N>1);
    unsigned int i=N-2, j;
    int taille_sous_tableau=0;

    while(taille_sous_tableau==0 && i!=0){
        j=0;
        while(j<i){
            if(T[j]!=T[N-i+j])
                j=i+1;
            j++;
        }
        if(j==i)
            taille_sous_tableau=i;
        i--;
    }


    return taille_sous_tableau;
}