#include <stdio.h>
#include <string.h>
int main() {
    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    float total = 0.0f;
    char currency = '$';
    printf("Enter item name: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1]= '\0';
    
    printf("Enter price: ");
    scanf("%f",&price);
    
    printf("Enter quantity: ");
    scanf("%d",&quantity);
    
    total = quantity * price;
    
    printf("Your Total for %d %s/s is %c%.2f",quantity,item,currency,total);
    return 0;
}
