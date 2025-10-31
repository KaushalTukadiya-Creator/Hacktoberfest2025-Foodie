#include <stdio.h>

int main() {
    int choice, quantity;
    float total = 0;
    char again;

    printf("\n====== Welcome to Kaushal’s Restaurant ======\n");

    do {
        printf("\n----- Menu -----\n");
        printf("1. Pizza        - Rs. 250\n");
        printf("2. Burger       - Rs. 150\n");
        printf("3. Pasta        - Rs. 180\n");
        printf("4. Coffee       - Rs. 120\n");
        printf("5. Exit & Bill\n");

        printf("\nEnter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice == 5)
            break;

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        switch (choice) {
            case 1:
                total += 250 * quantity;
                printf("%d Pizza(s) added to your order.\n", quantity);
                break;
            case 2:
                total += 150 * quantity;
                printf("%d Burger(s) added to your order.\n", quantity);
                break;
            case 3:
                total += 180 * quantity;
                printf("%d Pasta(s) added to your order.\n", quantity);
                break;
            case 4:
                total += 120 * quantity;
                printf("%d Coffee(s) added to your order.\n", quantity);
                break;
            default:
                printf("Invalid choice! Please select again.\n");
        }

        printf("\nDo you want to order more items? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    printf("\n====== Final Bill ======\n");
    printf("Total amount: Rs. %.2f\n", total);
    printf("Thank you for visiting Kaushal's Restaurant! \n");

    return 0;
}
