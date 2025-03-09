#include <stdio.h>
void main()
{
    int piels = 0;
    int coors = 0;
    int bud = 0;
    int iron_city = 0;
    int id, quantity;
    printf("Enter the initial inventory for each brand:\n");
    printf("Piels: ");
    scanf("%d", &piels);
    printf("Coors: ");
    scanf("%d", &coors);
    printf("Bud: ");
    scanf("%d", &bud);
    printf("Iron City: ");
    scanf("%d", &iron_city);
    while (1)
    {
        printf("Enter the transactions of brands [brand ID followed by quantity] : \n");
        printf("Brand ID's (1-Piels, 2-Coors, 3-Bud, 4-Iron City, 0-Exit): ");
        scanf("%d", &id);
        if (id == -1)
        {
            break;
        }
        printf("Enter amount (positive for purchase, negative for sale): ");
        scanf("%d", &quantity);
        switch (id)
        {
        case 1:
            piels += quantity;
            break;
        case 2:
            coors += quantity;
            break;
        case 3:
           bud += quantity;
            break;
        case 4:
           iron_city += quantity;
            break;
        default:
            printf("Invalid brand ID !");
        }
    }
    printf("\nFinal Inventory:");
    printf("Piels: %d cases", piels);
    printf("Coors: %d cases", coors);
    printf("Bud: %d cases", bud);
    printf("Iron City: %d cases",iron_city);
}