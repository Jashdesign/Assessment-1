#include<stdio.h>

void menu() {
    printf("Menu\n");
    printf("1.Pizza         200/-\n");
    printf("2.Burger        150/-\n");
    printf("3.Sandwich      120/-\n");
    printf("4.Dosa          140/-\n");
}

int main(){
    int choice,quantity;
    int amount;
    int total = 0;
    char decision;
    do
    {
        menu();
        printf("Select your Order number: ");
        scanf("%d",&choice);
        if (choice <= 0 || choice > 4)
        {
            printf("Please choose a valid order! \n");
        }
        switch (choice)
        {
        case 1:
            printf("You've selected Pizza!\n");
            printf("Enter Quantity: ");
            scanf("%d",&quantity);
            amount = 200 * quantity;
            break;
        case 2:
            printf("You've selected Burger!\n");
            printf("Enter Quantity: ");
            scanf("%d",&quantity);
            amount = 150 * quantity;
            break;
        case 3:
            printf("You've selected Sandwich!\n");
            printf("Enter Quantity: ");
            scanf("%d",&quantity);
            amount = 120 * quantity;
            break;
        case 4:
            printf("You've selected Dosa!\n");
            printf("Enter Quantity: ");
            scanf("%d",&quantity);
            amount = 140 * quantity;
            break;
        default:
            break;
        }
        total += amount;
        printf("Your total is : %d\n",total);
        printf("Want to order more? y or n: ");
        scanf(" %c",&decision);
    } while (decision == 'y' || decision == 'Y');
    
    printf("Your Grand total is : %d", total);
    return 0;
}