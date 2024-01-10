/*Smart Bazaar, a subsidiary of reliance wants to store the following : product name, id and 
price. Write a program in C to help reliance in storing the following details such that if they 
want to search a product via name or id, they should be able to get the details.*/
#include<stdio.h>
struct product {
    char name[50];
    int  id;
    int price;
};
int main() {
    struct product smart_bazaar;

    printf("Enter your product name: ");
    gets(smart_bazaar.name);

    printf("Enter the product ID: ");
    scanf(" %d", &smart_bazaar.id);

    printf("Enter the price: ");
    scanf("%d", &smart_bazaar.price);
    printf("\nProduct details:\n");
    printf("Name: %s\n", smart_bazaar.name);
    printf("ID: %d\n", smart_bazaar.id);
    printf("Price: %d\n", smart_bazaar.price);

    return 0;
}
