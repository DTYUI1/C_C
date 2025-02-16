#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char Item_name[40];
    int Quantity;
    float Price;
} Item;

int main(){
    int n;
    printf("Please enter the number of items: ");
    scanf("%d", &n);
    Item* items = (Item*) malloc(n * sizeof(Item));

    for (int i = 0; i < n; i++){
        printf("Enter the %d item data: ", i);
        scanf("%s %d %f", &items[i].Item_name, &items[i].Quantity, &items[i].Price);
    }

    system("clear");
    for (int i = 0; i < n; i++){
        printf("Item: %s\n", items[i].Item_name);
        printf("Quantity: %d\n", items[i].Quantity);
        printf("Price: %.2f\n\n", items[i].Price);
    }
    free(items);
}