#include <stdio.h> // Inclure la bibliothèque standard pour les entrées/sorties

int main() {
    int n, i, somme = 0;               // Déclarer les variables : n pour la taille, i pour la boucle, somme pour additionner
    int tab[] = {10, 20, 30, 40};      // Tableau avec 4 valeurs fixes
    float moyenne;                     // Variable pour la moyenne

    scanf("%d", &n);                   // Lire un entier (par exemple 4) depuis l'entrée utilisateur

    for (i = 0; i < n; i++) {          // Boucle de 0 à n-1
        somme += tab[i];              // Ajouter chaque élément du tableau à la somme
    }

    moyenne = (float)somme / n;       // Calculer la moyenne (cast pour obtenir un résultat flottant)

    printf("La moyenne est : %.1f\n", moyenne); // Afficher la moyenne avec 1 chiffre après la virgule

    return 0;                          // Fin normale du programme
}
