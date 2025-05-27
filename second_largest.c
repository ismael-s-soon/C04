#include <stdio.h>

int main() {
    int n, tab[] = {5, 9, 3, 7, 1, 9};
    int i, max = tab[0], second = -1e9;

    scanf("%d", &n);

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
