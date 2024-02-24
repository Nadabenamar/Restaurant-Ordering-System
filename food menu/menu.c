#include <stdio.h>

int main() {
    char sup, service, size;
    int choice;
    float totalPrice = 0.0;
    char checkout;
    
    do {
        printf("Welcome to our restaurant!\nOur menu:\n1. Pizza - $10.00\n2. Tacos - $8.00\n3. Salad - $6.00\n4. Checkout\n");

        printf("Please enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // pizza ordering
                printf("You chose Pizza\n");
                totalPrice += 10.0;
                printf("Which size do you prefer to order your choice?\nAvailable sizes are:\nM\nL\nX\n");
                scanf(" %c", &size);

                switch (size) {
                    case 'M':
                        break;
                    case 'L':
                        totalPrice += 1.2;
                        break;
                    case 'X':
                        totalPrice += 1.5;
                        break;
                    default:
                        printf("Invalid size choice\n");
                }

                printf("You can add to your choice:\nA. 3 cheese\nB. Chicken\nC. Beef\nD. Tuna\n");
                printf("Enter your supplement choice (A-D): ");
                scanf(" %c", &sup);

                switch (sup) {
                    case 'A':
                        totalPrice += 2.0;
                        break;
                    case 'B':
                        totalPrice += 3.0;
                        break;
                    case 'C':
                        totalPrice += 4.0;
                        break;
                    case 'D':
                        totalPrice += 5.0;
                        break;
                    default:
                        printf("Invalid supplement choice\n");
                        break;
                }
                break;

            case 2: // tacos ordering
                printf("You chose Tacos\n");
                totalPrice += 8.0;
                printf("Which size do you want to order your choice?\nAvailable sizes are:\nM\nL\nX\n");
                scanf(" %c", &size);

                switch (size) {
                    case 'M':
                        break;
                    case 'L':
                        totalPrice += 1.2;
                        break;
                    case 'X':
                        totalPrice += 1.5;
                        break;
                    default:
                        printf("Invalid size choice\n");
                }

                printf("You can add to your choice:\nA. 3 cheese\nB. Chicken\nC. Beef\nD. Tuna\n");
                printf("Enter your supplement choice (A-D): ");
                scanf(" %c", &sup);

                switch (sup) {
                    case 'A':
                        totalPrice += 2.0;
                        break;
                    case 'B':
                        totalPrice += 3.0;
                        break;
                    case 'C':
                        totalPrice += 4.0;
                        break;
                    case 'D':
                        totalPrice += 5.0;
                        break;
                    default:
                        printf("Invalid supplement choice\n");
                        break;
                }
                break;

            case 3: // salad ordering
                printf("You chose Salad\n");
                totalPrice += 6.0;
                printf("Which size do you want to order your choice?\nAvailable sizes are:\nM\nL\nX\n");
                scanf(" %c", &size);

                switch (size) {
                    case 'M':
                        break;
                    case 'L':
                        totalPrice += 1.2;
                        break;
                    case 'X':
                        totalPrice += 1.5;
                        break;
                    default:
                        printf("Invalid size choice\n");
                }

                printf("You can add to your choice:\nA. 3 cheese\nB. Chicken\nC. Beef\nD. Tuna\n");
                printf("Enter your supplement choice (A-D): ");
                scanf(" %c", &sup);

                switch (sup) {
                    case 'A':
                        totalPrice += 2.0;
                        break;
                    case 'B':
                        totalPrice += 3.0;
                        break;
                    case 'C':
                        totalPrice += 4.0;
                        break;
                    case 'D':
                        totalPrice += 5.0;
                        break;
                    default:
                        printf("Invalid supplement choice\n");
                        break;
                }
                break;

            case 4: // Checkout
                printf("Checkout\n");
                printf("Which service do you have?\nEnter 'E' for student or 'S' for senior: ");
                scanf(" %c", &service);
                
                if (service == 'E') {
                    printf("You have a 19%% promotion\n");
                    totalPrice -= totalPrice * 0.19;
                } 
                else if (service == 'S') {
                    printf("You have a 30%% promotion\n");
                    totalPrice -= totalPrice * 0.30;
                } 
                else {
                    printf("Invalid service choice\n");
                }
                
                printf("Total Price: $%.2f\n", totalPrice);
                printf("Do you want to check out? (Enter 'y' for yes, any other key to continue): ");
                scanf(" %c", &checkout);
                break;

            default:
                printf("Invalid choice\n");
                break;
        }
    } while (checkout != 'y');

    printf("You get a 5%% discount on the total price!\n");
    totalPrice -= totalPrice * 0.05;
    printf("Final Total Price after discount: $%.2f\n", totalPrice);

    return 0;
}
