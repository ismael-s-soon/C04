#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Lire la taille du tableau

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Lire les éléments du tableau
    }

    int max = arr[0];
    int second_max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }

    printf("Le deuxième plus grand nombre est : %d\n", second_max);
    return 0;
}
