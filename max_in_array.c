#include <stdio.h>

int main() {
    int n, i, max;
    int tab[100]; // Tableau avec une taille maximale de 100

    scanf("%d", &n); // Lire le nombre d'éléments

    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]); // Lire les n éléments
    }

    max = tab[0]; // Supposer que le premier élément est le plus grand

    for (i = 1; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i]; // Trouver un plus grand élément
        }
    }

    printf("Le maximum est : %d\n", max); // Afficher le maximum
    return 0;
}
