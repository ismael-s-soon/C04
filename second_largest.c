#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Lire le nombre total d'éléments

    if (n < 2) {
        // Si moins de deux éléments, on ne peut pas trouver le 2e plus grand
        printf("Il faut au moins deux éléments.\n");
        return 1;
    }

    int max, second, x;

    // Lire les deux premiers nombres
    scanf("%d %d", &max, &second);

    // S'assurer que 'max' est plus grand que 'second'
    if (second > max) {
        int temp = max;
        max = second;
        second = temp;
    }

    // Parcourir les n-2 nombres restants
    for (int i = 2; i < n; i++) {
        scanf("%d", &x); // Lire le nombre suivant

        if (x > max) {
            // Si x est plus grand que le max actuel
            second = max; // L'ancien max devient le second
            max = x;      // x devient le nouveau max
        } else if (x > second && x != max) {
            // Si x est entre le max et le second (et différent du max)
            second = x; // Mettre à jour le second
        }
    }

    printf("Le deuxième plus grand nombre est : %d\n", second);
    return 0;
}
