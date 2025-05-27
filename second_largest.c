#include <stdio.h>

int main() {
    int n;
    int tab[] = {3, 7, 2, 9, 4, 9};
    int i, max, second;

    scanf("%d", &n); // Lire le nombre d'éléments

    max = second = tab[0];

    for (i = 1; i < n; i++) {
        if (tab[i] > max) {
            second = max;
            max = tab[i];
        } else if (tab[i] > second && tab[i] < max) {
            second = tab[i];
        }
    }

    printf("Le deuxième plus grand nombre est : %d\n", second);

    return 0;
}
