/**
 * prefixe_suffixe.h
 * 
 * Ce fichier contient la déclaration de la fonction prefixe_suffixe
 * 
 * @author: RUSSE Cyril
 * @date: 28-07-2020
 * @projet: INFO0947 Projet 1
 */

#ifndef __PREF_SUFF__
#define __PREF_SUFF__
/**
  * prefixe_suffixe
  *
  * Fonction qui renvoit la taille du plus grand sous tableau
  *   étant préfixe et suffixe
  *
  * @param T tableau d'entiers initialisé au préalable
  * 
  * @pre : T!=NULL, N>1
  * @post : T=T_0, N=N_0, taille_sous_tableau = PrefixeSuffixe(T, N)
  *
  * @return : taille_sous_tableau
  * 
  */
int prefixe_suffixe(int *T, const unsigned int N);

#endif