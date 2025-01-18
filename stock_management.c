#include <stdio.h>

int main() {
    // Array Initialization: stock[] stores the quantities of 5 products
    int stock[] = {10, 50, 30, 15, 25};
    int totalStock = 0;
    float averageStock;
    int n = sizeof(stock) / sizeof(stock[0]); // Number of products

    // Display Stock Quantities
    printf("Stock quantities for each product:\n");
    for (int i = 0; i < n; i++) {
        printf("Product %d: %d\n", i + 1, stock[i]);
    }

    // Total Stock Calculation
    for (int i = 0; i < n; i++) {
        totalStock += stock[i];
    }

    // Average Stock Calculation
    averageStock = (float)totalStock / n;

    // Display Total Stock and Average Stock
    printf("\nTotal stock of all products: %d\n", totalStock);
    printf("Average stock quantity: %.2f\n", averageStock);

    return 0;
}
