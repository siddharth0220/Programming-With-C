#include <stdio.h>
    #define oldflush  15
    #define newflush  2
    #define perdayflush  14
    #define pertoiletcost  150
int main() {
    int population;
    printf("Enter the community population: ");
    scanf("%d", &population);
    double toilets = population / 3.0;
    double water_saved_per_day = toilets * perdayflush * (oldflush - newflush);
    double total_cost = toilets * pertoiletcost;
    printf("Water saved per day: %lf liters\n", water_saved_per_day);
    printf("Total cost to install new toilets: $%lf", total_cost);

    return 0;
}