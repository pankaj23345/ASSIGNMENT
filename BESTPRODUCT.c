#include <stdio.h>

int main() {
    int N;
    printf("Enter the number of products: ");
    scanf("%d", &N);

    int discounts[N];
    printf("Enter the discounts for each product:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &discounts[i]);
    }

    int maxDiscount = 0;
    int minDiscount = 100;
    int maxIndex = -1;
    int minIndex = -1;

    for (int i = 0; i < N; i++) {
        if (discounts[i] > maxDiscount) {
            maxDiscount = discounts[i];
            maxIndex = i;
        }
        if (discounts[i] < minDiscount) {
            minDiscount = discounts[i];
            minIndex = i;
        }
    }

    printf("The best product with the highest discount is product %d with a discount of %d%%.\n", maxIndex + 1, maxDiscount);
    printf("The best product with the lowest discount is product %d with a discount of %d%%.\n", minIndex + 1, minDiscount);

    return 0;
}
