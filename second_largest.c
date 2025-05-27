#include <stdio.h>

int main() {
    int n, i;
    int tab[] = {3, 7, 2, 9, 4, 9}; // tableau avec des valeurs codées
    int max = tab[0];
    int second_max = -1;

    scanf("%d", &n); // Lire uniquement le nombre d'éléments (6 ici)

    for (i = 1; i < n; i++) {
        if (tab[i] > max) {
            second_max = max;
            max = tab[i];
        } else if (tab[i] > second_max && tab[i] < max) {
            second_max = tab[i];
        }
    }

    printf("Le deuxième plus grand nombre est : %d\n", second_max);

    return 0;
}
