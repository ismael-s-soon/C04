#include <stdio.h> // Bibliothèque pour les entrées/sorties

int main() {
    int n, i, max;              // n = nombre d'éléments, i = compteur, max = valeur maximale
    int tab[100];               // Tableau de taille maximale 100

    scanf("%d", &n);            // Lire combien d'éléments l'utilisateur va entrer

    for (i = 0; i < n; i++) {   // Boucle pour lire chaque élément
        scanf("%d", &tab[i]);   // Stocker chaque valeur dans le tableau
    }

    max = tab[0];               // Initialiser le max avec le 1er élément du tableau

    for (i = 1; i < n; i++) {   // Boucle de 1 à n-1 pour comparer les autres éléments
        if (tab[i] > max) {     // Si un élément est plus grand que max actuel
            max = tab[i];       // Alors on met à jour le max
        }
    }

    printf("Le maximum est : %d\n", max); // Afficher la plus grande valeur trouvée
    return 0;                   // Fin normale du programme
}
